import zlib
import sys

from silver_bullet import primer


def encrypt(user_input, passphrase):
	#Compress user input---------------------------
	compressed=zlib.compress(user_input.encode())
	ui_listed=list(compressed)

	#Encrypt and return the data-------------------
	cipher_text, locked_pad = primer.encrypt_core(ui_listed, passphrase)

	return (cipher_text, locked_pad)




def decrypt(cipher_text, locked_pad, passphrase):
	#Decrypt the data------------------------------
	deciphered=primer.decrypt_core(cipher_text, locked_pad, passphrase)

	#Decompress and return the data----------------
	byted=bytes(deciphered)
	decompressed=zlib.decompress(byted).decode()

	return decompressed