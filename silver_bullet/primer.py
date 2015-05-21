import random

from silver_bullet import propellant

# Ascii-related operations and variables =========

ascii_value=256

def ascii_check(value):
	if value<0:
		return value+ascii_value

	elif value>=ascii_value:
		return value-ascii_value
	else:
		return value




# Generate pad ===================================

def decide_type(value):
	int_or_str=propellant.propellant()%2

	if int_or_str is 0:
		return int(value)
	else:
		return str(value)


def pad_gen(ui_numbered):
	pad=[0 for num in range(len(ui_numbered))]
	rounds=3+propellant.propellant()%6

	for counter in range(rounds):
		op_decider=propellant.propellant()%3
		actual_seed=propellant.propellant()

		if op_decider is 0:
			random.seed(decide_type(actual_seed))
			pad=[ascii_check(element+random.randrange(ascii_value)) for element in pad]
		
		elif op_decider is 1:
			random.seed(decide_type(actual_seed))
			random.shuffle(pad)			
		
		elif op_decider is 2:
			random.seed(decide_type(actual_seed))
			pad=[ascii_check(element+random.randrange(ascii_value)) for element in pad]
			
			random.seed(decide_type(actual_seed))
			random.shuffle(pad)

	return pad




# Crypto operations ==============================

def encrypt_op(ui_listed, pad):
	holder=[]
	counter=0

	for element in ui_listed:
		ciphered=element^pad[counter]
		holder.append(ciphered)
		counter+=1

	joined=' '.join(map(str, holder))
	return joined


def lock_op(pad, passphrase):
	holder=[]
	random.seed(passphrase)

	for element in pad:
		locked=ascii_check(element+random.randrange(ascii_value))
		holder.append(locked)

	joined=' '.join(map(str, holder))
	return joined


def unlock_op(locked_pad, passphrase):
	locked_pad_listed=locked_pad.split(' ')
	holder=[]
	random.seed(passphrase)

	for element in locked_pad_listed:
		unlocked=ascii_check(int(element)-random.randrange(ascii_value))
		holder.append(unlocked)

	return holder


def decrypt_op(cipher_text, pad):
	cipher_text_listed=cipher_text.split(' ')
	holder=[]
	counter=0

	for element in cipher_text_listed:
		decrypted=int(element)^pad[counter]
		holder.append(decrypted)
		counter+=1

	return holder




# Core engine of the crypto ===========================================================

def encrypt_core(ui_listed, passphrase):

	#Generate pad and encrypt ----------
	pad=pad_gen(ui_listed)
	cipher_text=encrypt_op(ui_listed, pad)
	
	#Lock the pad-----------------------
	locked_pad=lock_op(pad, passphrase)

	return (cipher_text, locked_pad)



def decrypt_core(cipher_text, locked_pad, passphrase):

	#Unlock the pad --------------------
	pad=unlock_op(locked_pad, passphrase)

	#Decrypt the string-----------------
	deciphered=decrypt_op(cipher_text, pad)

	return deciphered