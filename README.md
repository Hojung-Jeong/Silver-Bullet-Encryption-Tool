#Silver Bullet Encryption Tool
Silver Bullet Encryption Tool is an encryption tool based on three-dimensional cryptography model (it can also be called 'advanced one time pad'). It also true random number generator which makes stream of random data by making data corruption intentionally.

#Install  
On Windows machines or virtualenv
>python3 setup.py install      

Installing directly on Unix-based system
>sudo python3 setup.py install  


#Symmetric encryption
-Encrypt
>from silver_bullet.symcrypt import sym_encrypt    
>plain_text = 'This is top secret'  
>passphrase = 'Passphrase should be complex!'  
>cipher_text, locked_pad = sym_encrypt ( plain_text,  passphrase )   

-Decrypt
>from  silver_bullet.symcrypt  import  sym_decrypt  
>plain_text = '12 34 56 78 90'  
>locked_pad = '09 87 65 43 21'   
>passphrase = 'Passphrase should be complex!'  
>plain_text = sym_decrypt ( plain_text, locked_pad,  passphrase )  

#Asymmetric encryption    
-Generate common    
>from silver_bullet.asymcrypt import gen_comon   
>common=gen_common()   

-Generate public and private keys    
>from silver_bullet.asymcrypt import gen_key    
>pubkey, privkey = gen_key( gen_key(common) )    

-Encrypt    
>from silver_bullet.asymcrypt import asym_encrypt    
>cipher_text, locked_pad = asym_encrypt(user_input, thatguyspub, mypriv)    

-Decrypt    
>from silver_bullet.asymcrypt import asym_decrypt    
>plain_text = asym_decrypt(cipher_text, locked_pad, thatguyspub, mypriv)    

#Generate random numbers    
>from silver_bullet.TRNG import trng    
>print ( trng( ) )   


#How it works    
-Symmetric    
1. The random number generator of this module makes randomness by executing several threads without lock. In any programming languages, if several threads are executed without delimiter, which makes them share same memory space, the result is unpredictable.    
2. One of biggest security risks related to "many time pads" (basically doing one-time pad operations multiple times with the same pad) is called "Crib-dragging". It is an attack which utilises the fact that "multiple time pads" encrypt data using same pad and operations. However, if two different strings are encrypted using different operations, there is no way to drag the random pad out.    

-Asymmetric    
1. Public and Private keys a user has are not directly related. They are related in a sense that they are made from same pair of integers, but in Public key, their data is partly corrupted because of NAND and OR gate operations.    
2. Even if the data is partly corrupted, it is possible to reach the same result if they are exchanged in specific way.\n
3. Random pads are added to prevent chosen-ciphertext attack
4. To simply put    
  (A nand C)  ^ (A or C) ^ Arand = D(A ^ C with partly corrupted data to prevent reverse)    
  (B nand C)  ^ (B or C) ^ Brand = E(B ^ C with partly corrupted data to prevent reverse)    
  (E ^ A ^ Arand) = (D ^ B ^ Brand)    


#License    
Apache License    
