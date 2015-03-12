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

In my opinion, there are tiny imprecision in all over the universe which makes truly random phenomena. However, humans have ignored them by saying "0.999... equals 1". Ok, I will firstly crush this false thinking.

What mathematicians say in "0.999... = 1" argument is that 0.000...1 is not a number, so it is basically 1. They will insist with algebra, conversion of fraction, and things like that.

However, if you look closer in it, you will find the core argument is this "This just works, so you (those who think 0.999... does not equal 1) are wrong".


Here are some of their arguments.
--------------------
1) It just works. See this

x = 0.999...

10x = 9.999...

10x - x = 9.999... - 0.999...

9x = 9

x = 1

2) Another proof

1/3 = 0.333...

3(1/3) = 3(0.333...)

1 = 0.999...

Ok, let's think about it, and before that, we should forget about mathematical rubbish like algebra, conversion, diversion or things like that. Let's play just with numbers.
----------------------------------

If we define "Infinitely small number" that mainstream mathematics refuse to accept, we can easily find errors.

Basically we will declare that there is a number system like 0.000...(infinite 0s)...001.

Lots of mathematicians will quickly jump into it and say "No! There is no number like that".

HOWEVER, REMEMBER. In the past, negative numbers were not accepted by mathematics society as well. It was finally accepted after mathematicians spent "Enough time" (to sneer the inventors of negative numbers and fail).

In addition, the mainstream mathematics already accepted the existence of i (square root of -1). It defies all of the conventional "Mathematical proving" (again, processes to sneer the inventors of the new number system and fail), but we accept the fact that it clearly "exists".

So, why not infinitely small numbers while we said yes to square root of -1?
------------------
Let's just define it as "ifs" (infinite sequence, ex. 0.111...(infinite 1s)...111), and disprove what mainstream mathematicians say.

1) x is still 9ifs (0.999...), not 1. Why have mathematicians thought the value of same variable x is same?

x = 9ifs

10x = 90ifs

9x = 81ifs

x = 9ifs

Simple and clear

2) It is impossible to PRECISELY represent 1/3 in base 10. So...

x = 1/3

x = 3ifs

3x = 9ifs

x = 3ifs

Again, simple and clear.

Still some close-minded people may respond in this way
-----------------
(Insult) (Insult) (Insult) (Insult)

Then, watch [this video](https://www.youtube.com/watch?v=D2xYjiL8yyE) and realise how self-contradictory conventional mathematics is when it comes to this topic (she is saying pi is 4, and any number is, in the end, 0)


Let's go back to our main topic again. Physicists have struggled to figure out the source of "True randomness" because we have been told 0.999... equals 1. Now, with this new equation, let's really think about everything.

There is nothing "Perfectly deterministic" in the universe we live in. It is somewhat imprecise in every single part. However, they are usually so tiny that it is safe to ignore, or just being covered up by other forces (like gravity).

That means "True randomness" exists in the form of imprecision. This hypothesis explains a lot of observed facts about the universe we live in.

Firstly, The universe expands faster and faster. There is no reasonable explanation for it, but now, we have one. If imprecision in parts of universe where other forces like gravity cannot cancel out its effects create new information in the form of imprecision, that means those parts are filled with new informations. If it happens on the scale of the whole universe. The result is expanding universe, and it will expand faster and faster as there are more and more information (or in other words, things) to make more imprecision which makes more things.

Secondly, the universe is not flat. Physicists have thought it is flat because mathematics said 0.999... equals 1 and 0.000...1 equals 0. Now, we proved that is wrong, so this concept needs to be corrected. It is nearly flat like giaaaaaaaaaaant balloon, but it is not entirely flat. There will always be some curves making it exist, not just fade away to flatness. It just looks flat to humans, but it is actually not.

If we combine the two previous points, we can get this conclusion "The universe we live in is neither finite or infinite. There is definitely boundary of the entire universe, but it is being pushed further and further infinitely"

In addition, I found out that relativity should be slightly corrected. It says "Nothing is faster than light because nothing with mass can exist at speed of light". It sounds self-contradictory, and it is. It's because even Einstein was fooled by this stupid mathematical equation. It should be changed like this "There is ultimate speed limit in the physical world we live in, and it is extremely slightly faster than speed of light. Nothing can exist at that speed. The point is because light is the known element travelling closest to that speed and the difference is extremely tiny (which is only visible on whole universe scale), it is safe to use the speed of light as the ultimate speed limit".

Finally, in that sense, there is nothing "truly" massless. Even particles like photons has its own mass, which gives it its existence. The imprecision is so tiny that it is safe to consider it having no mass. The difference is only visible on whole universe scale, so why not?

I personally blame all of the contradictions and paradoxes in physics world on that mathematical imprecision. It is safe to use in human technology, but if we watch the whole universe, we can easily sea the difference.
