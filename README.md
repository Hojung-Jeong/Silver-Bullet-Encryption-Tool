#Silver Bullet Encryption Tool
Silver Bullet Encryption Tool is an encryption tool based on three-dimensional cryptography model (it can also be called 'advanced one time pad'). It also true random number generator which makes stream of random data by making data corruption intentionally.

#Install  
On Windows machines or virtualenv
>python3 setup.py install      
Installing directly on Unix-based system
>sudo python3 setup.py install  


#Symmetric
-Encrypt
>from  silver_bullet.symcrypt  import sym_encrypt
>plain_text = 'This is top secret'  
>passphrase = 'Passphrase should be complex!'  
>cipher_text, locked_pad = encrypt ( plain_text,  passphrase )   

-Decrypt
>from  silver_bullet.symcrypt  import  sym_decrypt  
>plain_text = '12 34 56 78 90'  
>locked_pad = '09 87 65 43 21'   
>passphrase = 'Passphrase should be complex!'  
>plain_text = decrypt ( plain_text, locked_pad,  passphrase )  

-Generate random numbers
>from silver_bullet.propellant import propellant  
>print ( propellant( ) )


#How it works
1. The random number generator of this module makes randomness by executing several threads without lock. In any programming languages, if several threads are executed without delimiter, which makes them share same memory space, the result is unpredictable.
2. One of biggest security risks related to "many time pads" (basically doing one-time pad operations multiple times with the same pad) is called "Crib-dragging". It is an attack which utilises the fact that "multiple time pads" encrypt data using same pad and operations. However, if two different strings are encrypted using different operations, there is no way to drag the random pad out.


#License
Apache License
