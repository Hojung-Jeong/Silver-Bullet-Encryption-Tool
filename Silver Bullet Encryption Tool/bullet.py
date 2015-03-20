#!/usr/bin/python3
#-*-coding:utf-8-*-

import os
import getpass

from case import rim


#Necessary variables and functions ===========================================================

ask='''If you want to encrypt simple input, type 'e'
If you want to decrypt simple input, type 'd'
If you want to encrypt a file, type 'ef'
If you want to decrypt an encrypted file with a key file, type 'df'
If you want to quit, type 'q'
=====>  '''

readme='''Encrypted.txt contains the encrypted string,
and Pad.txt contains the key for the encrypted file.
NOTE THAT IT IS RECOMMENDED AGAINST TO CHANGE THE FILE NAME.
'''


error='Oops! There was an unexpected error'

fd_error='''Make sure that Encrypted.txt and Pad.txt are in the given directory
Or check whether you typed the correct directory name
Or please check your passphrase
If you checked all of them, but still get this error, your file is likely to be corrupted
'''




def next_op():
	input('Please hit enter to go ahead')
	command=input(ask)
	command=command.strip()
	operation(command)




def simple_encrypt():
	try:
		user_input=input('\n\n\nEnter the string you want to encrypt: ')
		passphrase=getpass.getpass('Enter a passphrase: ')

		string, locked_pad = rim.encrypt(user_input, passphrase)

		print('\n\n\nThe encrypted string is:\n'+string)
		print('\nThe pad is:\n'+locked_pad+'\n\n')

		next_op()

	except:
		print(error)




def simple_decrypt():
	try:
		encrypted_string=input('\n\n\nEnter the  string you want to decrypt: ')
		pad=input('Enter the pad for the string: ')
		passphrase=getpass.getpass('Enter the passphrase for the encrypted string: ')

		decrypted=rim.decrypt(encrypted_string, pad, passphrase)

		print('\n\n\nThe decrypted string is\n===> '+decrypted+'\n\n')

		next_op()

	except:
		print(error)




def file_encrypt():
	try:
		name=input('\n\n\nCopy the file you want to encrypt to the directory bullet.py exists,\nand enter the name of your file: ')
		passphrase=getpass.getpass('Enter a passphrase for the file to encrypt: ')
		reader = open (name, 'r').read()

		dirname, extension = os.path.splitext(name)

		check_file=os.path.isfile(name)

		if check_file is True:
			pass
		else:
			print(name, "doesn't exist")
			next_op()


		check_dir = os.path.exists(dirname)

		if check_dir is True:
			pass
		else:
			os.makedirs(dirname)


		string, pad = rim.encrypt(reader, passphrase)


		with open (dirname+'/Encrypted.txt', 'w') as opener:
			opener.write(string)

		with open (dirname+'/Pad.txt', 'w') as opener:
			opener.write(pad)

		with open (dirname+'/README.txt', 'w') as opener:
			opener.write(readme)

		with open (dirname+'/.Extension.info', 'w') as opener:
			opener.write(extension)


		print("\n\nEncrypting Succeeded! Please check the files inside the directory named after your file name")
		next_op()

	except:
		print('\n\n'+error)
		next_op()




def file_decrypt():
	try:
		dirname=input('\n\nEnter the name of the directory encrypted file and key file are in: ')
		passphrase=getpass.getpass('Enter the passphrase for the encrypted file: ')
		string=open(dirname+'/Encrypted.txt', 'r').read()
		pad=open(dirname+'/Pad.txt', 'r').read()
		extension=open(dirname+'/.Extension.info', 'r').read()

		decrypted=rim.decrypt(string, pad, passphrase)

		with open(dirname+extension, 'w') as opener:
			opener.write(decrypted)

		print('\nDecrypted file was successfully created\n\n')
		next_op()

	except:
		print('\n'+fd_error)
		print('Operation aborted')
		next_op()





#Main Interface===============================================================================

print('''Silver Bullet Encryption Tool
The only bullet that survives the hardship


                            
                           ##      
                  ##      ####        #
                 ###      ####        ##
                 ###      ####        ###
                 ###      ####        ####
         ##      ###      ####        ####
          ##     ###      ####       ####    
          ##     ####     ####      ####       
           ###   #####    ####     ####       ##
           ###########################       ####
            ############################    ######    
              ###########################  ######     
              ###########     ################     
              ###########    ################       
               ###########  #############
                #####################
                  #################
                   ###############
                    ##############
                     ############
                     ############
                      ###########




''')



command=input(ask)
command=command.strip()



def operation(command):

	#Simple input encrption
	if command=='e':
		simple_encrypt()

	#Simple input decryption
	elif command=='d':
		simple_decrypt()

	#File encryption
	elif command=='ef':
		file_encrypt()

	#File decryption
	elif command=='df':
		file_decrypt()

	#Quit command
	elif command=='q':
		print('\n\nThank you very much!\n\n')

	#When the user entered a wrong command
	else:
		command=input('Enter a valid command===> ')
		operation(command)



operation(command)