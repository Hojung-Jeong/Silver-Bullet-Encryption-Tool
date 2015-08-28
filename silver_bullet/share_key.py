'''
>List of functions
	1. letsbegin()	-	This function returns list of 0 or 1(binary numbers) which must be kept secret, and cipher text and locked pad for validation.
	2. gen_key(raw_value)	-	Returns hashed key for encryption/decryption, and encrypted string and pads for authentication
	3. shuffleit(toshuffle,passphrase)	-	Shuffle the given list(toshuffle) by seeding passphrase. It means the results are predictable if he/she knows passphrase(which is impossible to a possible attacker).
	4. ppcheck(exchanged,txtct,txtlp,ppct,pplp)	-	Checks whether key exchange is finished. If it returns True, the key exchange was successful.


>How to use it?
	1. Suppose there are Alice, Bob, and Eve(So classic, but why not?). Alice wants to share a key with Bob, and Eve is trying to sniff on it.
	2. Alice generates secret binary, and authentication cipher text and locked pad using letsbegin() function.
	3. Alice shuffles secret binary with her passphrase using shuffleit() function.
	4. Alice publishes shuffled binary, cipher text, and locked pad
	5. Bob receives the shuffled binary number and shuffle it with his passphrase using shuffleit() function.
	6. Bob generates a key with the shuffled binary using gen_key() function
	7. Bob checks whether it is the secret that Alice wants to share with cipher text and locked pad Alice sent using ppcheck() function
	8. If ppcheck() returns True, the shuffled binary is what Alice wants to share. Otherwise, Bob sends the shuffled binary back to Alice
	9. Alice and Bob repeats 3~8 untill Bob reaches the secret Alice wants to share.


>Demonstration
import random
from silver_bullet.share_key import *
from silver_bullet.crypto import decrypt

rawlist,txtct,txtlp,ppct,pplp=letsbegin()

while True:
	rawlist=shuffleit(rawlist,"Now, it's time for a string")
	rawlist=shuffleit(rawlist,"Isn't it?")

	if ppcheck(rawlist,txtct,txtlp,ppct,pplp):
		print("Key was shared successfully!")
		print("The secret key is:",gen_key(rawlist))
		break
'''


# CODE ========================================================================

import random
from hashlib import sha1
from silver_bullet.TRNG import trng,trlist
from silver_bullet.crypto import encrypt,decrypt


numofdigit=75
rounds=2
test_text="Tadah!!!"


def gen_key(raw_value):
	raw_length=len(raw_value)
	first=raw_value[:round(raw_length/3)]
	second=raw_value[round(raw_length/3):round(raw_length/3)*2]
	third=raw_value[round(raw_length/3)*2:round(raw_length/3)*3]
	seed_list=[first,second,third]
	key=''

	for element in seed_list:
		key+=sha1(str(int(element,2)).encode()).hexdigest()
		sliced_key=list(key)
		seed_string=sha1(str(int(raw_value,2)).encode()).hexdigest()
		random.seed(seed_string)
		random.shuffle(sliced_key)
		key=''.join(sliced_key)
		
	return key


def letsbegin():
	secret_list=trlist(numofdigit*rounds,2)
	
	secret=''.join(map(str,secret_list))
	secret_key=gen_key(secret)
	raw_ct,raw_lp=encrypt(test_text,secret_key)
	tmpp=sha1(str(trng()).encode()).hexdigest()
	txtct,txtlp=encrypt(raw_ct+'-'+raw_lp,tmpp)
	ppct,pplp=encrypt(tmpp,secret_key)

	return secret,txtct,txtlp,ppct,pplp


def shuffleit(toshuffle,passphrase):
	shuffled=[]

	for counter in range(rounds):
		start=counter*numofdigit
		target=toshuffle[start:start+numofdigit]
		tlist=list(target)
		random.seed(passphrase)
		random.shuffle(tlist)
		shuffled.append(''.join(tlist))

	return ''.join(shuffled)


def ppcheck(exchanged,txtct,txtlp,ppct,pplp):
	secret_key=gen_key(exchanged)

	try:
		tmpp=decrypt(ppct,pplp,secret_key)
		peeled=decrypt(txtct,txtlp,tmpp)
		cipher_text,locked_pad=peeled.split('-')
		plain_text=decrypt(cipher_text,locked_pad,secret_key)

		if plain_text==test_text:
			return True
		else:
			return False

	except:
		return False