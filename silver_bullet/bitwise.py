'''
>List of functions:
	1. bitflip(target)	-	Flips each bit of the given binary(it supposes it's in string format)
	2. add_them(list1,list2)	-	Implement SAME(XOR) gate operation of the two given lists
'''


def bitflip(target):
	holder=[]

	for element in target:
		if element==1:
			holder.append('0')
		else:
			holder.append('1')

	return holder


def add_them(list1,list2):
	holder=[]

	for counter in range(len(list1)):
		bit1=list1[counter]
		bit2=list2[counter]

		if bit1==bit2:
			holder.append('0')
		else:
			holder.append('1')

	return holder