Silver-Bullet-Encryption-Tool
=============================
The only bullet that survives the hardship

Silver Bullet Encryption Tool is an uncrackable encryption Tool implementing three dimensional encryption scheme

It contains true random number generator which makes data corruptions intentionally with several threads to make true randomness.

From ver. 3.4, It utilises XOR gate operation for faster performance and more secure encryption

Here is how it works

First, there is an integer A which is basically the plain text. Then do XOR gate operation with B which is truly random number. Just suppose the result is 100

A ^ B = 100

Second, add pseudo-random number, C, seeded by the passphrase to the value of B. The reason C is added to B instead of do another XOR operation is to preven Crib-Dragging attack. 

Suppose the result is 49.

B + C = 49

Now, the value of B ^ C, 49 is totally useless to decrypt A ^ B because it is DIFFERENT from the pad which encrypted the string A.

In addition, it is also impossible to guess the value of C because B is working as a truly random buffer.

Hope you enjoy it



---------------------------------------
P.S.

In this programme, I created true randomness using a deterministic system. It was possible using imprecisions. I personally believe this is why the universe expands faster and faster, and entropy of the universe increases.

The universe is made up of 12 fundamental particles interacting in 4 different ways. However, if there is nothing limiting those movements, there can be imprecisions (like the data corruption generated by threads in propellant.py script). This is what makes more and more information, and this is why the universe expands faster and faster. Simply, if there are more entropy (or information), the amount of imprecisions generated by existing information will increase.

If this is the case, the universe is neither infinite or finite. It can be considered both. It is finite because there is definitely boundary of the entire universe, but at the same time, the boundary is being always pushed further and further infinitely.

Again, hope you enjoy this tool and my theory. If you are good at mathematics, please prove this theory.
