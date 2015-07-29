
'''
-I hope python contains bitwise NOR and NAND as default bitwise operators.
They are essential in silver bullet asymmetric encryption scheme.

-I tried to use bit flipping(~), but because of two's complement(which should've not be implemented in this way in python), I couldn't use it.

-Finally, I blame lack of bitwise NOR and NAND on archaic C. Python should've evolved as an independent language, not interpreted through in C by default

List of functions:
	1. nor(int1, int2)            -           Perform NOR gate operation of int1 and int2
	
	2. nand(int1, int2)           -           Perform NAND gate operation of int1 and int2

'''


def nor(int1, int2):
	ored=int1|int2
	bint=list(bin(ored))[2:]
	holder=[]

	for element in bint:
		if element=='1':
			holder.append('0')
		elif element=='0':
			holder.append('1')

	return int(''.join(holder), 2)


def nand(int1, int2):
	anded=int1&int2
	banded=list(bin(anded))[2:]
	bint1_len=len(bin(int1)[2:])
	bint2_len=len(bin(int2)[2:])

	if bint1_len>bint2_len:
		total_len=bint1_len
	else:
		total_len=bint2_len
	
	holder=['1' for addit in range(total_len-len(banded))]

	for element in banded:
		if element=='1':
			holder.append('0')
		elif element=='0':
			holder.append('1')

	return int(''.join(holder), 2)