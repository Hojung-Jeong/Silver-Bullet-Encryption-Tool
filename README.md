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

The universe we live in is made up of 12 fundamental particles interacting in 4 different and predictable ways. However, I found there are several things disobeying this rule

One of them is the sum of geometric sequence. It is, at least mathematically, in the end equals 1. This is the equation saying it is in the end 1

x = 0.999...

10x = 9.999...

10x - x = 9.999... - 0.999...

9x = 9

x = 1

Interesting enough. Then, how about thinking in this way?

x=0.999...

x=0.999...999

It is in the end ...999, and because the 9s in between the two sides (0.999... and ...999) are infinite, it is still same number.

Then, let's think about this way.

9x = 0.999...999 x 9

9x = 8.999...991

x=0.999...

Why the results are different? Still, x in both sides are infinitely recurring 0.9. However, the results are different. 

Then, which side is right? I bet for the latter one because latter one clearly says x equals 0.999..., while the first one say it is either 0.999... or 1, which looks like mathematical imprecision

I think this kind of things taking place on quantum level (which is still theoratical) is how the universe we live in works. In other words, the physical world we live in is built from and upon imprecision. It seems there are some proof supporting this hypothesis

For example, the universe we live in is expanding. It is expanding faster and faster, and it seems that new things are created in every single part of the universe, which means it is expanding like balloons. (This is what cosmologists and physicists have observed) According to my hypothesis, this is because existing particles in the universe we live in always makes imprecision on the rate of 0.000...01 percent. In other words, that imprecision is creating new things.

Then, one of other physical hypothesis should be changed. That is the assumption that the universe we live in is flat. According to conventional theory, it is flat because it is just 1 dimension in the end. However, my hypothesis explains that still there is tiny bit of dimension that we have yet figured out.

It also says the speed of light is not the ultimate speed limit. The ultimate limit is speed of light according to relativity. However, according to my hypothesis, it is extremely slightly faster than it. We just have not figured it out, and in most cases it does not matter because that imprecision is extremely tiny.

My tool utilised this hypothesis. If there is something "Truly random" in deterministic system, it is imprecision. What I needed to do is to maximise the effect on the result.
