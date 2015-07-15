
'''
List of functions:

	1. scom_encrypt(user_input, passphrase)       -         The name stands for "symmetric compressed encryption".
	                                                        It provides same functionality with standard SBET symmetric
	                                                        encryption with compression.

	2. scom_decrypt(user_input, passphrase)       -         The name stands for "symmetric compressed decryption".
	                                                        It provides same functionality with standard SBET symmetric
	                                                        decryption with compression.
'''

import zlib
import sys

from silver_bullet.symcrypt import sym_encrypt_core, sym_decrypt_core


def scom_encrypt(user_input, passphrase):
	compressed = zlib.compress(user_input.encode())
	ui_listed = list(compressed)
	cipher_text, locked_pad = sym_encrypt_core(ui_listed, passphrase)

	return (cipher_text, locked_pad)


def scom_decrypt(cipher_text, locked_pad, passphrase):
	deciphered = sym_decrypt_core(cipher_text, locked_pad, passphrase)
	byted = bytes(deciphered)
	decompressed = zlib.decompress(byted).decode()

	return decompressed