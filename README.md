Silver-Bullet-Encryption-Tool
=============================
The only bullet that survives the hardship

Silver Bullet Encryption Tool is an uncrackable encryption Tool based on one-time pad model.

It contains true random number generator which makes data corruptions intentionally with several threads to make true randomness.

There was a huge security flaw in ver 2.0 and 2.1. It is highly recommended AGAINST USING THE TWO VERSIONS. They are crackable like any other stream ciphers.

From ver. 3.0, each byte is encrypted with truly random numbers generated by propellant.py script. After that, the random key is encrypted with stream of pseudo-random numbers seeded by the passphrase. This effectively makes the key useless without passphrase because the key is random. Basically Random x Predictable Number is still random.

This is a clear equation about how it works

TEXT + ( TRN X PRN ) = 10

In ver. 2.0 and 2.0 there was work around because pseduo random number was subtracted from truly random numbers. It was possible to make

TEXT + ( TRN - PRN ) = 10

to

TEXT + TRN - PRN = 10

This is a huge security vulnerability because the truly random buffer was useless. However, from 3.0, it becomes uncrackable again thanks to the properly working random buffer.

Hope you enjoy it



---------------------------------------
P.S.

In this programme, I created true randomness using a deterministic system. It was possible using imprecisions. I personally believe this is why the universe expands faster and faster, and entropy of the universe increases.

The universe is made up of 12 fundamental particles interacting in 4 different ways. However, if there is nothing limiting those movements, there can be imprecisions (like the data corruption generated by threads in propellant.py script). This is what makes more and more information, and this is why the universe expands faster and faster. Simply, if there are more entropy (or information), the amount of imprecisions generated by existing information will increase.

If this is the case, the universe is neither infinite or finite. It can be considered both. It is finite because there is definitely boundary of the entire universe, but at the same time, the boundary is being always pushed further and further infinitely.

Again, hope you enjoy this tool and my theory. If you are good at mathematics, please prove this theory.
