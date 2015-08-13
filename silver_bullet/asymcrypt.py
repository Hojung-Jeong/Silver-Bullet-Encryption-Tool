'''
Lis of functions:
	1. gen_common()                                             -          Generates publishable number(That number is called common)
	
	2. gen_key(common)                                          -          Generates public and private key pair for the user.

	3. asym_encrypt(user_input,thatguyspub,mypriv)              -          Encrypt user input with receiver's public key and sender's private key

	4. asym_decrypt(cipher_text,locked_pad,thatguyspub,mypriv)  -          Decryption cipher text with sender's public key and receiver's private key
'''
#==========================================================================================================
'''
This is how to use this library

1. Suppose there are Henry, Marina, and Tom. Henry and Marina want to communicate secretly, and Tom is sniffing the communication channel they are using

2. Henry generates common number using gen_common() function, and publishes it. Now, everyone knows common.

3. Henry and Marina each generate public and private key using the published common. (gen_key() function)

4. Henry and Marina publishes their public keys

5. Henry encrypts the message he wants to send using asym_encrypt() function. He needs his private key and Marina's public key for it.

6. Marina receives the message, and decrypt it using Henry's public key and her private

7. Now, secure communication between Henry and Marina succeeded without being sniffed by Tom.


-------------------------------Example script-------------------------------
#from silver_bullet.asymcrypt import gen_common,gen_key,compute_paph,asym_encrypt,asym_decrypt
#
#common=gen_common()
#
#Apub,Apriv=gen_key(common)
#Bpub,Bpriv=gen_key(common)
#
#text="Hello!!! I will be hidden behind nothing!!! :)"
#
#cipher_text,locked_pad=asym_encrypt(text,Apub,Bpriv)
#
#print(asym_decrypt(cipher_text,locked_pad,Bpub,Apriv))


*For technical details, please read README.md file*
'''


# CODE ========================================================================

import random
from hashlib import sha1

from silver_bullet.TRNG import trng
from silver_bullet.bitwise import same
from silver_bullet.symcrypt import sym_encrypt,sym_decrypt


minimum=140564819207303340847894502572032


def gen_common():
	return (trng()%minimum)+minimum


def gen_key(common):
	myprivlist=[(trng()%minimum)+minimum for counter in range(9)]
	mypublist=[]

	for counter in range(3):
		samed1=same(myprivlist[counter],common)
		samed2=same(myprivlist[counter+3],common)
		randomiser=myprivlist[counter+6]
		pubthis=samed1^samed2^randomiser
		mypublist.append(pubthis)

	joined_pub=' '.join(map(str,mypublist))
	joined_priv=' '.join(map(str,myprivlist))

	return joined_pub,joined_priv


def compute_paph(pubkey,privkey):
	publist=pubkey.split(' ')
	privlist=privkey.split(' ')
	counter=0
	paph=[]

	for element in publist:
		secret_num=int(element)^int(privlist[counter])^int(privlist[counter+3])^int(privlist[counter+6])
		resulting=sha1(str(secret_num).encode()).hexdigest()

		if counter<2:
			paph.append(resulting)
		else:
			sliced=list(''.join(paph))
			random.seed(resulting)
			random.shuffle(sliced)

		counter+=1

	return ''.join(sliced)


def asym_encrypt(user_input,thatguyspub,mypriv):
	passphrase=compute_paph(thatguyspub,mypriv)
	cipher_text,locked_pad=sym_encrypt(user_input,passphrase)
	return cipher_text,locked_pad


def asym_decrypt(cipher_text,locked_pad,thatguyspub,mypriv):
	passphrase=compute_paph(thatguyspub,mypriv)
	plain_text=sym_decrypt(cipher_text,locked_pad,passphrase)
	return plain_text