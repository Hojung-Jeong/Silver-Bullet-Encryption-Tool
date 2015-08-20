'''
>List of functions
	1. encrypt(user_input,passphrase)	-	Encrypt the given string with the given passphrase. Returns cipher text and locked pad.
	2. decrypt(cipher_text,locked_pad,passphrase)	-	Decrypt the cipher text encrypted with SBET. It requires cipher text, locked pad, and passphrase.
'''


# CODE ========================================================================

import zlib
import random
from hashlib import sha1
from silver_bullet.TRNG import trlist
from silver_bullet.contain_value import contain


ascii_value=256


def ciphering(target_list,pad,decrypt=False):
	result=[]

	for counter in range(len(pad)):
		if decrypt==False:
			operated=contain(target_list[counter]+pad[counter],ascii_value)
		else:
			operated=contain(int(target_list[counter])-pad[counter],ascii_value)

		result.append(operated)

	return result


def locker(pad,passphrase):
	cutter=round(len(passphrase)/2)
	splited=[passphrase[:cutter],passphrase[cutter:]]
	locker=[0 for counter in range(len(pad))]

	for element in splited:
		bloated_seed=sha1(element.encode()).hexdigest()
		random.seed(bloated_seed)
		locker=[contain(random.randrange(ascii_value)+element,ascii_value) for element in locker]
	
	holder=[]

	for counter in range(len(pad)):
		operated=int(pad[counter])^locker[counter]
		holder.append(operated)

	return holder


def encrypt(user_input,passphrase):
	compressed=zlib.compress(user_input.encode())
	ui_listed=list(compressed)
	pad=trlist(len(ui_listed),ascii_value)

	ct=ciphering(ui_listed,pad)
	lp=locker(pad,passphrase)

	cipher_text=' '.join(map(str,ct))
	locked_pad=' '.join(map(str,lp))
	return cipher_text, locked_pad


def decrypt(cipher_text,locked_pad,passphrase):
	ct=cipher_text.split(' ')
	lp=locked_pad.split(' ')
	
	pad=locker(lp,passphrase)
	pt=ciphering(ct,pad,True)

	byted=bytes(pt)
	decompressed=zlib.decompress(byted).decode()

	return decompressed