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

This [MSDN article](https://msdn.microsoft.com/en-us/magazine/cc163744.aspx) explains how it works

Hope you enjoy it



---------------------------------------
P.S.

In this programme, I created true randomness using a deterministic system. It was possible using imprecisions. I personally believe this is how the physical world we live in works

The universe we live in is made up of 12 fundamental particles interacting in 4 different and predictable ways. In other words, it is somewhat deterministic. However, what if it is not perfectly deterministic?

In my opinion, there are tiny imprecision in all over the universe which makes truly random phenomena. However, humans have ignored them by saying "0.999... equals 1". Ok, I will firstly crush this false thinking.

What mathematicians say in "0.999... = 1" argument is that 0.000...1 is not a number, so it is basically 1. They will insist with algebra, conversion of fraction, and things like that.

However, if you look closer in it, you will find the core argument is this "This just works, so you (those who think 0.999... does not equal 1) are wrong".


Here are some of their arguments.
#####
1. It just works. See this
#####
x = 0.999...
#####
10x = 9.999...
#####
10x - x = 9.999... - 0.999...
#####
9x = 9
#####
x = 1
#####
2. Another proof
#####
1/3 = 0.333...
#####
3(1/3) = 3(0.333...)
#####
1 = 0.999...

