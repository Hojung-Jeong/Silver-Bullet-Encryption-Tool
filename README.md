Silver-Bullet-Encryption-Tool
=============================
The only bullet that survives the hardship

Silver Bullet Encryption Tool is an uncrackable encryption Tool implementing three dimensional encryption scheme

Here is how it works

First, there is an integer A which is basically the plain text. Then do XOR gate operation with B which is truly random number. Just suppose the result is 100

A ^ B = 100

Second, add pseudo-random number, C, seeded by the passphrase to the value of B. The reason C is added to B instead of doing another XOR operation is to prevent Crib-Dragging attack. 

Suppose the result is 49.

B + C = 49

Now, the value of B + C, 49, is totally useless to decrypt A ^ B because it is DIFFERENT from the pad which encrypted the string A.

In addition, it is also impossible to guess the value of C because B is working as a truly random buffer.

What is more important is that even if it is now like two-time padding C and A with same pad, which means possible attacker vector called Crib Drag, it is impossible to do the attack because the operations are different. XOR gate operation was used to encrypt the string, and locker was ADDED to the pad. + and ^ are incompatible and have no way to get around with them.


*Crib dragging is one of methods of crypto-analysis attacking multiple-time pads. For example, if the example above was like below,

A + B = 100

B + C = 49

it is now possible to remove the random pad by simple subtracting B + C, 49, from A + B, 100. The result is 

( A + B ) - ( B + C ) = 51

A - C = 51

Now, it is basically a stream cipher which is crackable.

However, if the encryption was done using A^B, there is no way to peel off or drag out the truly random pad.

A ^ B = 100

B + c = 49

Now, there is two valid one-time pads using the same pad.

It also contains true random number generator which makes data corruptions intentionally with several threads to make true randomness. If several threads (not processes) are executed without lock, they share the same memory resource, which can lead to data corruption and imprecision of the resulting data.

This [MSDN article](https://msdn.microsoft.com/en-us/magazine/cc163744.aspx) explains how it works.

This means basically, computers cannot control whether a thread will be covered up by another one or not. It is basically 50:50 chance in every single digit. 

Hope you enjoy it
