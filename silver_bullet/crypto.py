'''
>List of functions
	1. encrypt(user_input,passphrase)	-	Encrypt the given string with the given passphrase. Returns cipher text and locked pad.
	2. decrypt(cipher_text,locked_pad,passphrase)	-	Decrypt the cipher text encrypted with SBET. It requires cipher text, locked pad, and passphrase.
'''


# CODE ========================================================================

import zlib
import random
from silver_bullet.TRNG import trng


ascii_value=256

def contain_ascii(value):
	if value<0:
		return value+ascii_value

	elif value>=ascii_value:
		return value-ascii_value
	else:
		return value


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


def ciphering(target_list,pad,decrypt=False):
	result=[]

	for counter in range(len(pad)):
		if decrypt==False:
			operated=contain_ascii(target_list[counter]+pad[counter])
		else:
			operated=contain_ascii(int(target_list[counter])-pad[counter])

		result.append(operated)

	return result


def locker(pad,passphrase):
	cutter=round(len(passphrase)/2)
	front=passphrase[:cutter]
	rear=passphrase[cutter:]

	random.seed(front)
	locker=[random.randrange(ascii_value) for counter in range(len(pad))]

	random.seed(rear)
	locker=[contain_ascii(random.randrange(ascii_value)+element) for element in locker]
	
	holder=[]

	for counter in range(len(pad)):
		operated=int(pad[counter])^locker[counter]
		holder.append(operated)

	return holder


def encrypt(user_input,passphrase):
	compressed=zlib.compress(user_input.encode())
	ui_listed=list(compressed)
	pad=gen_pad(ui_listed)

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