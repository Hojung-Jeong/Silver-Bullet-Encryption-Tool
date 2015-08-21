'''



'''


# CODE ========================================================================

import random
from hashlib import sha1
from silver_bullet.TRNG import trlist
from silver_bullet.crypto import encrypt,decrypt


numofdigit=9
rounds=20
test_text="Tadah!!!"


def gen_key(raw_value):
	raw_length=len(raw_value)
	first=raw_value[:round(raw_length/3)]
	second=raw_value[round(raw_length/3):round(raw_length/3)*2]
	third=raw_value[round(raw_length/3)*2:round(raw_length/3)*3]

	key=sha1(str(int(first,2)).encode()).hexdigest()
	key=key+sha1(str(int(second,2)).encode()).hexdigest()
	sliced_key=list(key)
	seed_string=sha1(str(int(third,2)).encode()).hexdigest()
	random.seed(seed_string)
	random.shuffle(sliced_key)
	key=''.join(sliced_key)

	return key


def letsbegin():
	secret_list=trlist(numofdigit*rounds,2)
	
	secret=''.join(map(str,secret_list))
	secret_key=gen_key(secret)
	cipher_text,locked_pad=encrypt(test_text,secret_key)

	return secret,secret_key,cipher_text,locked_pad


def shuffleit(toshuffle,passphrase):
	shuffled=[]

	for counter in range(rounds):
		start=counter*numofdigit
		target=toshuffle[start:start+9]
		tlist=list(target)
		random.seed(passphrase)
		random.shuffle(tlist)
		shuffled.append(''.join(tlist))

	return ''.join(shuffled)


def ppcheck(exchanged,cipher_text,locked_pad):
	secret_key=gen_key(exchanged)

	try:
		plain_text=decrypt(cipher_text,locked_pad,secret_key)

		if plain_text==test_text:
			return True
		else:
			return False

	except:
		return False





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