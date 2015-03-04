import random
import zlib
import sys

from bullet_parts import propellant



max_size=10000



def encrypt_core(user_input, passphrase):

	#Compress user input===========================

    compressed=zlib.compress(user_input.encode())
    ui_numbered=int.from_bytes(compressed, byteorder='big', signed=False)


    #Generate turly random pad and encrypt=========

    pad=0

    while pad<ui_numbered:
        random.seed(propellant.propellant())
        pad+=random.randrange(ui_numbered)

        desolved_pad=list(str(pad))
        random.seed(propellant.propellant())
        random.shuffle(desolved_pad)
        pad=int(''.join(desolved_pad))

    cipher_text=ui_numbered^pad


    #Lock the pad =================================

    random.seed(passphrase)

    locker=random.randrange(cipher_text)

    while cipher_text>locker:
        another=random.randrange(cipher_text)
        locker+=another

        desolved_locker=list(str(locker))
        random.shuffle(desolved_locker)
        locker=int(''.join(desolved_locker))

    locked_pad=pad+locker

    return (str(cipher_text), str(locked_pad))







def decrypt_core(cipher_text, locked_pad, passphrase):

	#Unlock the pad ===============================

    cipher_text=int(cipher_text)
    locked_pad=int(locked_pad)

    random.seed(passphrase)

    locker=random.randrange(cipher_text)

    while cipher_text>locker:
        another=random.randrange(cipher_text)
        locker+=another

        desolved_locker=list(str(locker))
        random.shuffle(desolved_locker)
        locker=int(''.join(desolved_locker))


    pad=locked_pad-locker

    #Decrypt the string ===========================

    deciphered=cipher_text^pad

    byted=deciphered.to_bytes((deciphered.bit_length()+7)//8, 'big')

    decompressed=zlib.decompress(byted).decode()

    return decompressed








def encrypt(user_input, passphrase):

	check=sys.getsizeof(user_input)

	if check<=max_size:
		cipher_text, locked_pad = encrypt_core(user_input, passphrase)
		return (cipher_text, locked_pad)
	
	else:
		#==================
		chunks=[user_input[unit:unit+max_size] for unit in range(0, len(user_input), max_size)]
		string_holder=[]
		pad_holder=[]

		for data in chunks:
			cipher_text, locked_pad = encrypt_core(data, passphrase)
			string_holder.append(cipher_text)
			pad_holder.append(locked_pad)

		cipher_text=' '.join(string_holder)
		locked_pad=' '.join(pad_holder)

		return (cipher_text, locked_pad)






def decrypt(cipher_text, locked_pad, passphrase):

	cipher_text_list=cipher_text.split(' ')
	locked_pad_list=locked_pad.split(' ')

	if len(cipher_text_list)==1 and len(locked_pad_list)==1:
		plain_text=decrypt_core(cipher_text, locked_pad, passphrase)
		return plain_text

	else:
		holder=[]

		for element in cipher_text_list:
			plain_text=decrypt_core(element, locked_pad_list[cipher_text_list.index(element)], passphrase)
			holder.append(plain_text)

		plain_text=''.join(holder)

		return plain_text