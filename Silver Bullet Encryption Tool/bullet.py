#!/usr/bin/python3
#-*-coding:utf-8-*-

import sys
sys.path.append('bullet_parts')
import primer
import os
import getpass


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



ask='''If you want to encrypt simple input, type 'e'
If you want to decrypt simple input, type 'd'
If you want to encrypt a file, type 'ef'
If you want to decrypt an encrypted file with a key file, type 'df'
If you want to quit, type 'q'
=====>  '''

readme='''Encrypted.txt contains the encrypted string,
and Key.txt contains the key for the encrypted file.
NOTE THAT IT IS RECOMMENDED AGAINST TO CHANGE THE FILE NAME.
'''

separator=' '


command=input(ask)
command=command.strip()





def operation(command):

    #Simple input encrption
    if command=='e':
        try:
            user_input=input('\n\n\nEnter the string you want to encrypt: ')
            passphrase=getpass.getpass('Enter a passphrase: ')
        
            string, key = primer.encrypt(user_input, passphrase)

            print('\n\n\nThe encrypted string is:\n'+string)
            print('\nThe key is:\n'+key+'\n\n')


            input('Operation finished! Please hit enter to go ahead')
            command=input(ask)
            command=command.strip()
            operation(command)
        except:
            print('Oops! There was an unexpected error')





    #Simple input decryption
    elif command=='d':
        try:
            encrypted_string=input('\n\n\nEnter the  string you want to decrypt: ')
            key=input('Enter the key for the string: ')
            passphrase=getpass.getpass('Enter the passphrase for the encrypted string: ')


            check_string=encrypted_string.split(separator)
            check_key=key.split(separator)

            if len(check_string)==len(check_key):

                decrypted=primer.decrypt(encrypted_string, key, passphrase)

                print('\n\n\nThe decrypted string is\n===> '+decrypted+'\n\n')


                input('Operation finished! Please hit enter to go ahead')
                command=input(ask)
                command=command.strip()
                operation(command)
            else:
                print('Enter a valid key')
                operation('d')
        except:
            print('Oops! There was an unexpected error')






    #File encryption
    elif command=='ef':
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
            	operation('ef')


            check_dir = os.path.exists(dirname)

            if check_dir is True:
                pass
            else:
                os.makedirs(dirname)


            string, key = primer.encrypt(reader, passphrase)


            with open (dirname+'/Encrypted.txt', 'w') as opener:
                opener.write(string)

            with open (dirname+'/Key.txt', 'w') as opener:
                opener.write(key)

            with open (dirname+'/README.txt', 'w') as opener:
                opener.write(readme)

            with open (dirname+'/.Extension.info', 'w') as opener:
                opener.write(extension)


            print("\n\nEncrypting Succeeded! Please check the files inside the directory named after your file name")
            
            input('Please hit enter to go ahead')
            command=input(ask)
            command=command.strip()
            operation(command)

        except:
            print('\n\nPython cannot read the file. Operation aborted')

            input('Please hit enter to go ahead')
            command=input(ask)
            command=command.strip()
            operation(command)




    #File decryption
    elif command=='df':
        try:
            dirname=input('\n\nEnter the name of the directory encrypted file and key file are in: ')
            passphrase=getpass.getpass('Enter the passphrase for the encrypted file: ')
            string=open(dirname+'/Encrypted.txt', 'r').read()
            key=open(dirname+'/Key.txt', 'r').read()
            extension=open(dirname+'/.Extension.info', 'r').read()

            decrypted=primer.decrypt(string, key, passphrase)

            with open(dirname+'/Decrypted.'+extension, 'w') as opener:
                opener.write(decrypted)

            print('\nDecrypted file was successfully created\n\n')

            input('Please hit enter to go ahead')
            command=input(ask)
            command=command.strip()
            operation(command)

        except:
            print('\nMake sure that Encrypted.txt and Key.txt are in the given directory\nOr check whether you typed the correct directory name\nOr please check your passphrase')
            operation('df')




    #Quit command
    elif command=='q':
        print('\n\n\nThank you very much!\n\n')




    #When the user entered a wrong command
    else:
        command=input('Enter a valid command===> ')
        operation(command)




operation(command)




