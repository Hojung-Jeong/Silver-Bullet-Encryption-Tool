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

What I needed to do to create true random number generator using python 3 is to get that closer, and maximise the effect. Simple as that!

Hope you enjoy it



---------------------------------------
P.S.

In this programme, I created true randomness using a deterministic system. It was possible using imprecisions. I personally believe this is how the physical world we live in works

The universe we live in is made up of 12 fundamental particles interacting in 4 different and predictable ways. In other words, it is somewhat deterministic. However, what if it is not perfectly deterministic?

In my opinion, there are tiny imprecision in all over the universe which makes truly random phenomena. However, humans have ignored them by saying "0.999... equals 1".

This is one of systematic fraud in mathematics. To simply debunk it, let's think it this way.

Infinity means there is no end.

So, there can NEVER BE AND END in 0.999...

Then, it is simply impossible to find an "infinite end" and claim "after that point, it becomes 1"

Actually, 0.999... will be more than 1 and more than any number because it goes on like this according to traditional argument.

However, it isn't the case at all.

Let's go back to our main topic again. Physicists have struggled to figure out the source of "True randomness" because we have been told 0.999... equals 1. Now, after crushing that myth, let's really re-think about everything.

There is nothing "Perfectly deterministic" in the universe we live in. It is somewhat imprecise in every single part. However, they are usually so tiny that it is safe to ignore, or just being covered up by other forces (like gravity).

That means "True randomness" exists in the form of imprecision. This hypothesis explains a lot of observed facts about the universe we live in.

Firstly, The universe expands faster and faster. There is no reasonable explanation for it, but now, we have one. If imprecision in parts of universe where other forces like gravity cannot cancel out its effects creates new information in the form of imprecision, that means those parts are always being filled with new information. If it happens on the scale of the whole universe. The result is expanding universe, and it will expand faster and faster as there are more and more information (or in other words, things) to make more imprecision which makes more things.

Secondly, the universe is not flat. Physicists have thought it is flat because mathematics said 0.999... equals 1 and 0.000...1 equals 0. Now, we proved that is wrong, so this concept needs to be corrected. It is nearly flat like giaaaaaaaaaaant balloon, but it is not entirely flat. There will always be some curves making it exist, not just fade away to flatness. It just looks flat to humans, but it is actually not.

If we combine the two previous points, we can get this conclusion "The universe we live in is neither finite or infinite. There is definitely boundary of the entire universe, but it is being pushed further and further infinitely"

In addition, I found out that relativity should be slightly corrected. It says "Nothing is faster than light because nothing with mass can exist at speed of light". It sounds self-contradictory, and it is. It's because even Einstein was fooled by this stupid mathematical equation. It should be changed like this "There is ultimate speed limit in the physical world we live in, and it is extremely slightly faster than speed of light. Nothing can exist at that speed. The point is because light is the only known element travelling closest to that speed, and the difference is extremely tiny (which is only visible on whole universe scale), it is safe to use the speed of light as the ultimate speed limit".

Finally, in that sense, there is nothing "truly" massless. Even particles like photons has its own mass, which gives it its existence. However, that mass (which is not detectable with the current technology) is so tiny that it is safe to consider it having no mass. The difference is only visible on whole universe scale.

I personally blame all of the contradictions and paradoxes in physics world on that mathematical imprecision. It is safe to use in human technology, but if we watch the whole universe, we can easily see the difference.
