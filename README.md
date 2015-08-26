#Silver Bullet Encryption Tool
Silver Bullet Encryption Tool is an encryption tool based on three-dimensional cryptography model. It also contains true random number generator which generates random data by making data corruption intentionally.

#Install  
On Windows machines or virtualenv
>python3 setup.py install      

Installing directly on Unix-based system
>sudo python3 setup.py install  


#Crypto    
-Encrypt    
>from silver_bullet.crypto import encrypt    
>plain_text = 'This is top secret'  
>passphrase = 'Passphrase should be complex!'  
>cipher_text, locked_pad = encrypt ( plain_text,  passphrase )   

-Decrypt  
>from  silver_bullet.crypto  import  decrypt  
>plain_text = '12 34 56 78 90'  
>locked_pad = '09 87 65 43 21'   
>passphrase = 'Passphrase should be complex!'  
>plain_text = decrypt ( cipher_text, locked_pad,  passphrase )  

#Key exchange protocol    
-Demonstration is in the comment section of key_share file. There are some limitations in .md file format, so please read the comments  


#Generate random numbers    
>from silver_bullet.TRNG import trng    
>print ( trng( ) )   


#How it works    
-Crypto    
1. The random number generator of this module makes randomness by executing several threads without lock. In any programming languages, if several threads are executed without delimiter, which makes them share same memory space, the result is unpredictable.    
2. One of biggest security risks related to "many time pads" (basically doing one-time pad operations multiple times with the same pad) is called "Crib-dragging". It is an attack which utilises the fact that "multiple time pads" encrypt data using same pad and operations. However, if two different strings are encrypted using different operations, there is no way to drag the random pad out.    
3. Plain text is compressed before being encrypted to prevent chosen cipher-text attack. This method works if Russian Copulation stands true

-Key exchange protocol    
1. If you shuffle a stack of cards in EXACTLY SAME WAY, then you end up going back to where it started.    
2. This tool is not different from that. Shuffle a list in same pattern(A-B-A-B-A-B...), so that it ends up going back to original.    
3. What makes this protocol perfectly secure is that the list items are either 0 or 1. Therefore, it is simply impossible to track which element is in which position because there are so many other candidates as well.    
4. Now, Alice just needs to send an encrypted string and locked pad to Bob to prove that they share the same key, and it is indeed from Alice.    
5. Authentication text and pad are encrypted twice to prevent attackers from decrypting it directly using the test text("Tada!!"). It is possible because SBET is malleable and resistant to chosen-cipher text attack at the same time(again, if Russian Copulation stands true)


#License    
Apache License    
