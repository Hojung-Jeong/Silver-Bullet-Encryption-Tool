'''
List of functions:

	1. sym_encrypt(user_input, passphrase)                  -              Encrypt the given string with the given passphrase.
																		   Returns cipher text and locked pad

	2. sym_decrypt(cipher_text, locked_pad, passphrase)     -              Decrypt the cipher text encrypted with SBET.
	                                                                       It requires cipher text, locked pad, and passphrase.
'''


# CODE ========================================================================

import zlib
import random
from hashlib import sha1

from silver_bullet.TRNG import trng


ascii_value=256

def contain_ascii(value):
	if value<0:
		return value+ascii_value

	elif value>=ascii_value:
		return value-ascii_value
	else:
		return value


def pad_gen(ui_listed):
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


def sym_encrypt(user_input,passphrase):
	compressed=zlib.compress(user_input.encode())
	ui_listed=list(compressed)
	pad=pad_gen(ui_listed)
	
	ct=[]
	counter=0

	for element in ui_listed:
		ciphered=contain_ascii(element+pad[counter])
		ct.append(ciphered)
		counter+=1

	random.seed(passphrase)
	lp=[]
	counter=0

	for element in pad:
		locked=element^random.randrange(ascii_value)
		lp.append(locked)
		counter+=1

	cipher_text=' '.join(map(str,ct))
	locked_pad=' '.join(map(str,lp))
	return cipher_text, locked_pad


def sym_decrypt(cipher_text,locked_pad,passphrase):
	ct=cipher_text.split(' ')
	lp=locked_pad.split(' ')

	random.seed(passphrase)
	pad=[]
	counter=0

	for element in lp:
		unlocked=int(element)^random.randrange(ascii_value)
		pad.append(unlocked)
		counter+=1

	pt=[]
	counter=0

	for element in ct:
		deciphered=contain_ascii(int(element)-pad[counter])
		pt.append(deciphered)
		counter+=1

	byted=bytes(pt)
	decompressed=zlib.decompress(byted).decode()

	return decompressed