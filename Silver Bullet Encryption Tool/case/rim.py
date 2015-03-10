import zlib
import sys
import multiprocessing

from case import primer



#Necessary variables and functions ==================================================================

max_size=10000


def pool_op(op, data_set):
	max_resource=multiprocessing.cpu_count()
	pool=multiprocessing.Pool(processes=max_resource)
	result_set=pool.starmap(op, data_set)
	pool.terminate()

	return result_set


def add_zeros(target):
	target=str(target)
	if len(target)<max_size:
		filled='0'*(max_size-len(target))+target
		return filled
	else:
		return target



#Operations of the cipher ===========================================================================

def encrypt(user_input, passphrase):
	#Compress user input =================================
	compressed=zlib.compress(user_input.encode())
	ui_numbered=int.from_bytes(compressed, byteorder='big', signed=False)


	#Check the size of the data and encrypt accordingly ==
	ui_size=sys.getsizeof(ui_numbered)

	if ui_size<=max_size:
		cipher_text, locked_pad=primer.encrypt_core(ui_numbered, passphrase)
		return (str(cipher_text), str(locked_pad))

	else:
		str_ui_numbered=str(ui_numbered)
		chunks=[str_ui_numbered[unit:unit+max_size] for unit in range(0, len(str_ui_numbered), max_size)]

		data_set=[]

		for element in chunks:
			data_set.append((element, passphrase))

		result_set=pool_op(primer.encrypt_core, data_set)

		cipher_text_holder=[]
		locked_pad_holder=[]

		for sets in result_set:
			cipher_text_holder.append(str(sets[0]))
			locked_pad_holder.append(str(sets[1]))

		cipher_text=' '.join(cipher_text_holder)
		locked_pad=' '.join(locked_pad_holder)

		return (cipher_text, locked_pad)





def decrypt(cipher_text, locked_pad, passphrase):

	cipher_text_split=cipher_text.split(' ')
	locked_pad_split=locked_pad.split(' ')

	if len(cipher_text_split)<2 and len(locked_pad_split)<2:
		deciphered=primer.decrypt_core(cipher_text, locked_pad, passphrase)
		
		byted=deciphered.to_bytes((deciphered.bit_length()+7)//8, 'big')
		decompressed=zlib.decompress(byted).decode()
		
		return decompressed
	
	else:
		data_set=[]

		for ct, lp in zip(cipher_text_split, locked_pad_split):
			data_set.append((ct, lp, passphrase))

		result=pool_op(primer.decrypt_core, data_set)
		zero_checked=[add_zeros(element) for element in result]

		deciphered=int(''.join(map(str, result)))
		
		byted=deciphered.to_bytes((deciphered.bit_length()+7)//8, 'big')
		decompressed=zlib.decompress(byted).decode()
		
		return decompressed
