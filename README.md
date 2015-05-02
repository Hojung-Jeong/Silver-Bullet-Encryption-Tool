#Silver Bullet Encryption Tool
Silver Bullet Encryption Tool is an encryption tool based on three-dimensional cryptography model (it can be called 'advanced one time pad'). It also contains true random number generator which makes stream of random data by making data corruption intentionally.

From v5.0, Silver Bullet Encryption Tool is a python module. It does not have user interface anymore from that version.

#Install  
Windows   
>setup.py install  

Unix-based systems  
>sudo setup.py install


#Encrypt
>from silver_bullet.rim import encrypt, decrypt  
>plain_text = 'This is top secret'  
>passphrase = 'Passphrase should be complex!'  
>cipher_text, locked_pad = encrypt(plain_text, passphrase)  

#Decrypt
>from silver_bullet.rim import encrypt, decrypt  
>plain_text = '12 34 56 78 90'  
>locked_pad = '09 87 65 43 21'   
>passphrase = 'Passphrase should be complex!'  
>plain_text = decrypt(plain_text, locked_pad, passphrase)  

#Generate random numbers
>from silver_bullet.propellant import propellant  
>print ( propellant( ) )

#License
Apache License
