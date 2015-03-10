import random

from case import propellant





#Pad generator =================================================

def padding_op(ui_listed, padding):
	holder=[]

	for counter in range(len(ui_listed)):
		pad_element=abs(int(ui_listed[counter])-int(padding[counter%len(padding)]))
		holder.append(pad_element)

	return holder



def pad_gen(user_input):
	ui_listed=list(str(user_input))

	for counter in range(5):
		padding=list(str(propellant.propellant()))

		pad=padding_op(ui_listed, padding)
		random.seed(propellant.propellant())
		random.shuffle(pad)

	joined_pad=''.join(map(str, pad))

	return int(joined_pad)





#Locker Generator ==============================================

def locker_gen(cipher_text, passphrase):
	random.seed(passphrase)
	locker=0

	while locker<cipher_text:
		locker+=random.randrange(cipher_text)
		
		desolved_locker=list(str(locker))
		random.shuffle(desolved_locker)
		locker=int(''.join(desolved_locker))

	return locker





#Core engines of the crypto ====================================

def encrypt_core(user_input, passphrase):
	#Make user input integer=========
	user_input=int(user_input)


	#Encrypt user input with pad ====
	pad=pad_gen(user_input)
	cipher_text=user_input^pad


	#Lock pad with locker ===========
	locker=locker_gen(cipher_text, passphrase)
	locked_pad=pad+locker

	return (cipher_text, locked_pad)




def decrypt_core(cipher_text, locked_pad, passphrase):
	#Make necessary data integers ===
	cipher_text=int(cipher_text)
	locked_pad=int(locked_pad)


	#Unlock the pad =================
	locker=locker_gen(cipher_text, passphrase)
	pad=locked_pad-locker


	#Decrypt the cipher text ========
	plain_text=cipher_text^pad

	return plain_text