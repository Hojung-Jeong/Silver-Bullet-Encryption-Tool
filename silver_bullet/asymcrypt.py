import random

from silver_bullet.TRNG import trng
from silver_bullet.bitwise import nand
from silver_bullet.symcrypt import pad_gen,contain_ascii,ascii_value


'''
Lis of functions:
	1. gen_common()                                              -                       Generates publishable number(That number is called common)
	
	2. gen_key(common)                                           -                       Generates public and private key pair for the user.

	3. asym_encrypt(user_input,thatguyspub,mypriv)               -                       Encrypts user_input with the receiver's public key and sender's private key

	4. asym_decrypt(cipher_text,locked_pad,thatguyspub,mypriv)   -                       Decrypts strings encrypted with asym_encrypt() function



This is how to use this library

1. Suppose there are Henry, Marina, and Tom. Henry and Marina want to communicate secretly, and Tom is sniffing the communication channel they are using

2. Henry generates common number using gen_common() function, and publishes it. Now, everyone knows common.

3. Henry and Marina each generate public and private key using the published common. (gen_key() function)

4. Henry and Marina publishes their public keys

5. Henry encrypts the message he wants to send using asym_encrypt() function. He needs his private key and Marina's public key for it.

6. Marina receives the message, and decrypt it using Henry's public key and her private

7. Now, secure communication between Henry and Marina succeeded without being sniffed by Tom.



-------------------------------Example script-------------------------------
#from silver_bullet.asymcrypt import gen_common,gen_key,asym_encrypt,asym_decrypt
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


#maximum=2147483648
minimum=1073741824


def gen_common():
	return (trng()%minimum)+minimum


def gen_key(common):
	myprivlist=[(trng()%minimum)+minimum for counter in range(10)]
	mypublist=[]

	for counter in range(5):
		hooker=myprivlist[counter]
		randomiser=myprivlist[counter+5]

		hnandc=nand(hooker,common)
		horc=hooker|common
		pubthis=hnandc^horc^randomiser
		mypublist.append(pubthis)

	joined_pub=' '.join(map(str,mypublist))
	joined_priv=' '.join(map(str,myprivlist))

	return joined_pub,joined_priv


def asym_encrypt(user_input,thatguyspub,mypriv):
	ui_listed=list(user_input.encode())
	pad=pad_gen(ui_listed)
	counter=0
	cipher_text=[]

	for element in ui_listed:
		ciphered=contain_ascii(element+pad[counter])
		cipher_text.append(ciphered)
		counter+=1

	locked_pad=bilock(pad,thatguyspub,mypriv)

	final_ct=' '.join(map(str,cipher_text))
	final_lp=' '.join(map(str,locked_pad))

	return final_ct,final_lp


def asym_decrypt(cipher_text,locked_pad,thatguyspub,mypriv):
	ct_list=cipher_text.split(' ')
	lp_list=locked_pad.split(' ')

	unlocked_pad=bilock(lp_list,thatguyspub,mypriv)

	plain_text=[]
	counter=0

	for element in ct_list:
		deciphered=contain_ascii(int(element)-unlocked_pad[counter])
		plain_text.append(deciphered)
		counter+=1

	return bytes(plain_text).decode()

#===================================================================================

def bilock(tolock,pubkey,privkey):
	publist=pubkey.split(' ')
	privlist=privkey.split(' ')
	locked_list=tolock
	counter=0

	for element in publist:
		random.seed(int(element)^int(privlist[counter])^int(privlist[counter+5]))
		looper=0
		ll=[]

		for num in locked_list:
			locked=int(num)^random.randrange(ascii_value)
			ll.append(locked)
			looper+=1

		locked_list=ll
		counter+=1

	return locked_list