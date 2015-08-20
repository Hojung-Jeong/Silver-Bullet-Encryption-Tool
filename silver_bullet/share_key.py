'''



'''


# CODE ========================================================================



'''
#Failing code

import random
from hashlib import sha1
from silver_bullet.crypto import encrypt,decrypt
from silver_bullet.TRNG import trlist


numofdigit=10
limit=2**numofdigit
rounds=20
test_text="Tadah!!!"


def secretk(secrecy):
	slen=len(secrecy)
	splited=[secrecy[:round(slen/3)],secrecy[round(slen/3):round(slen/3)*2],secrecy[round(slen/3)*2:]]
	holder=[]

	for element in splited:
		integerised=int(element,2)
		hashed=sha1(str(integerised).encode()).hexdigest()

		if len(holder)==2:
			joined_holder=''.join(holder)
			sliced=list(joined_holder)
			random.seed(hashed)
			random.shuffle(sliced)
			return ''.join(sliced)
		else:
			holder.append(hashed)


def rearrange(toshuffle,passphrase):
	shuffled=[]

	for element in toshuffle:
		random.seed(passphrase)
		listed=list(element)
		random.shuffle(listed)
		shuffled.append(''.join(listed))

	return shuffled


def letsbegin(passphrase):
	secrets=trlist(rounds,limit)
	binned=[]
	
	for element in secrets:
		inbase2=bin(element)[2:]

		if len(inbase2)<numofdigit:
			shortage=numofdigit-len(inbase2)
			zeros=['0' for counter in range(shortage)]
			zero_joined=''.join(zeros)

			inbase2=zero_joined+inbase2

		binned.append(inbase2)

	secret_key=secretk(''.join(binned))
	cipher_text,locked_pad=encrypt(test_text,secret_key)

	shuffled=rearrange(binned,passphrase)
	joined=' '.join(shuffled)

	return secret_key,joined,cipher_text,locked_pad


def receive(target,passphrase,cipher_text,locked_pad):
	target_list=target.split(' ')
	shuffled=rearrange(target_list,passphrase)

	try:
		secret_key=secretk(''.join(shuffled))
		plain_text=decrypt(cipher_text,locked_pad,secret_key)

		if plain_text==test_text:
			return secret_key,True
		else:
			shuffled_joined=' '.join(shuffled)
			return shuffled_joined,False

	except:
		shuffled_joined=' '.join(shuffled)
		return shuffled_joined,False


def resend(target,passphrase):
	target_list=target.split(' ')
	shuffled=rearrange(target_list,passphrase)
	return shuffled
'''