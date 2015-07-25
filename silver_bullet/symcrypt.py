
'''
List of functions:

	1. sym_encrypt(user_input, passphrase)                  -              Encrypt the given string with the given passphrase.
																		   Returns cipher text and locked pad

	2. sym_decrypt(cipher_text, locked_pad, passphrase)     -              Decrypt the cipher text encrypted with SBET.
	                                                                       It requires cipher text, locked pad, and passphrase.

	3. sym_encrypt_core(ui_encoded, passphrase)             -              Same with sym_encrypt(), but takes encoded string
	                                                                       instead of normal string

	4. sym_decrypt_core                                     -              Same with sym_decrypt(), but takes encoded string
	                                                                       instead of normal string
'''

import random

from silver_bullet.TRNG import trng


ascii_value = 256

def contain_ascii(value):
	if value < 0:
		return value + ascii_value

	elif value >= ascii_value:
		return value - ascii_value
	else:
		return value


def decide_type(value):
	int_or_str = trng() % 2

	if int_or_str is 0:
		return int(value)
	else:
		return str(value)

#------------------------------------------------------------------

def pad_gen(ui_listed):
	pad=[0 for num in range(len(ui_listed))]

	for counter in range(20):
		op_decider = trng() % 3
		actual_seed = trng()

		if op_decider is 0:
			random.seed(decide_type(actual_seed))
			pad=[contain_ascii(element + random.randrange(ascii_value)) for element in pad]
		elif op_decider is 1:
			random.seed(decide_type(actual_seed))
			pad=[contain_ascii(element - random.randrange(ascii_value)) for element in pad]
		elif op_decider is 2:
			random.seed(decide_type(actual_seed))
			pad=[element ^ random.randrange(ascii_value) for element in pad]		

	return pad

#------------------------------------------------------------------

def sym_encrypt_core(ui_encoded, passphrase):
	ui_listed = list(ui_encoded)
	pad = pad_gen(ui_listed)
	
	ct = []
	counter = 0

	for element in ui_listed:
		ciphered = contain_ascii(element + pad[counter])
		ct.append(ciphered)
		counter += 1

	random.seed(passphrase)
	lp = []
	counter = 0

	for element in pad:
		locked = element ^ random.randrange(ascii_value)
		lp.append(locked)
		counter += 1

	cipher_text = ' '.join(map(str, ct))
	locked_pad = ' '.join(map(str, lp))
	return cipher_text, locked_pad


def sym_decrypt_core(cipher_text, locked_pad, passphrase):
	ct = cipher_text.split(' ')
	lp = locked_pad.split(' ')

	random.seed(passphrase)
	pad = []
	counter = 0

	for element in lp:
		unlocked = int(element) ^ random.randrange(ascii_value)
		pad.append(unlocked)
		counter += 1

	pt = []
	counter = 0

	for element in ct:
		deciphered = contain_ascii(int(element) - pad[counter])
		pt.append(deciphered)
		counter += 1

	return bytes(pt)

#------------------------------------------------------------------

def sym_encrypt(user_input, passphrase):
	encoded = user_input.encode()
	cipher_text, locked_pad = sym_encrypt_core(encoded, passphrase)

	return cipher_text, locked_pad


def sym_decrypt(cipher_text, locked_pad, passphrase):
	byted_pt = sym_decrypt_core(cipher_text, locked_pad, passphrase)
	plain_text = byted_pt.decode()

	return plain_text