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
3. Plain text is compressed at first to preven chosen-ciphertext attack

-Asymmetric    
1. Firstly, there is a common number C.    
2. "Person A" chooses A and Arand randomly respectively.   
3. "Person B" chooses B and Brand randomly respectively.   
4. "Person A" implements NAND and OR gate bitwise operations(or NOR and AND if they want, even if there is no advantage or disadvantage related to it) of A and C. Then, implement XOR gate operation of the resulting values. Let's call it Ahooked.    
5. "Person B" implements NAND and OR gate bitwise operations(or NOR and AND if they want, even if there is no advantage or disadvantage related to it) of B and C. Then, implement XOR gate operation of the resulting values. Let's call it Bhooked.    
6. "Person A" implements XOR gate operations of Arand and Ahooked. Let's call the result of it Apub.    
7. "Person B" implements XOR gate operations of Brand and Bhooked. Let's call the result of it Apub.    
8. THIS IS THE CORE IDEA!: For an attacker, there is no way to guess the value of A, B, Arand, and Brand since they are just randomly chosen. The attacker is able to guess the value of A if Ahooked is known(Please read my explanations below), but it is impossible to do so as Ahooked is XORed with another totally random number. Same one-time-pad-like dilemma exists in the case of B and Bpub as well.    
9. "Person A" implements XOR gate operation of Bpub, A, and Arand.    
10. "Person B" implements XOR gate operation of Apub, B, and Brand.    
11. Now, A and B have the same number secretly.    
12. This is simplified equatioin    
>(A nand C)  ^ (A or C) ^ Arand = Apub    
>(B nand C)  ^ (B or C) ^ Brand = Bpub     
>(Bpub ^ A ^ Arand) = (Apub ^ B ^ Brand)    

*-If Ahooked was revealed, how an attacker can guess A from Ahooked?*    
*1. Before start, Let's simplify things to bit-level. Everything is True or False, not integer*    
*2. Firstly, Assume C is False, and A is True.*    
*3. The result of A NAND C is True, and the result of A OR C is True. Therefore, Ahooked is False*    
*4. Second, Assume C is False(same), and A is False*    
*5. The result of A NAND C is True, but the result of A OR C is False. Therefore, Ahooked is True*    
*6. This kind of guess-attack is possible in case C is True as well*    
*7. To prevent this kind of attack, Arand is necessary. If Arand is XORed, There is no way to guess the value of A because it can be either True or False(and both of them are equally probable). This is exactly how one-time pad work*    
*8. Moreover, because C was not used directly, there is no way to drag out(or other kinds of guesswork) C from Apub*    


#License    
Apache License    
