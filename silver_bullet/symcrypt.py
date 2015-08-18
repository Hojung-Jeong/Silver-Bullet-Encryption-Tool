'''
>List of functions
	1. sym_encrypt(user_input,passphrase)	-	Encrypt the given string with the given passphrase. Returns cipher text and locked pad.
	2. sym_decrypt(cipher_text,locked_pad,passphrase)	-	Decrypt the cipher text encrypted with SBET. It requires cipher text, locked pad, and passphrase.
'''


# CODE ========================================================================

import zlib
import random
from hashlib import sha1
from silver_bullet.TRNG import trng
from silver_bullet.ascii import ascii_value,contain_ascii


def gen_pad(ui_listed):
	pad=[0 for num in range(len(ui_listed))]

	for counter in range(10):
		op_decider=trng()%3
		actual_seed=sha1(str(trng()).encode()).hexdigest()

		if op_decider is 0:
			random.seed(actual_seed)
			pad=[contain_ascii(element+random.randrange(ascii_value)) for element in pad]
		elif op_decider is 1:
			random.seed(actual_seed)
			pad=[contain_ascii(element-random.randrange(ascii_value)) for element in pad]
		elif op_decider is 2:
			random.seed(actual_seed)
			pad=[element^random.randrange(ascii_value) for element in pad]

	return pad


def cipherit(target_list,pad,mod):
	result=[]

	for counter in range(len(pad)):
		if mod==0:
			operated=contain_ascii(target_list[counter]+pad[counter])
		else:
			operated=contain_ascii(int(target_list[counter])-pad[counter])

		result.append(operated)

	return result


def symlocker(pad,passphrase):
	random.seed(passphrase)
	locker=[0 for counter in range(len(pad))]

	for counter in range(3):
		locker=[random.randrange(ascii_value)^element for element in locker]
	
	holder=[]

	for counter in range(len(pad)):
		operated=int(pad[counter])^locker[counter]
		holder.append(operated)

	return holder


def sym_encrypt(user_input,passphrase):
	compressed=zlib.compress(user_input.encode())
	ui_listed=list(compressed)
	pad=gen_pad(ui_listed)

	ct=cipherit(ui_listed,pad,0)
	lp=symlocker(pad,passphrase)

	cipher_text=' '.join(map(str,ct))
	locked_pad=' '.join(map(str,lp))
	return cipher_text, locked_pad


def sym_decrypt(cipher_text,locked_pad,passphrase):
	ct=cipher_text.split(' ')
	lp=locked_pad.split(' ')
	
	pad=symlocker(lp,passphrase)
	pt=cipherit(ct,pad,1)

	byted=bytes(pt)
	decompressed=zlib.decompress(byted).decode()

	return decompressed