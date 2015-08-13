'''
List of functions:
	1. same(int1,int2)            -              Implement bitwise SAME operator. Actually, it is officially called XNOR, but it's more intuitive and logical to call it SAME rather than XNOR
'''


# CODE ========================================================================

def same(int1,int2):
	xored=int1^int2
	bxored=list(bin(xored))[2:]
	bint1_len=len(bin(int1)[2:])
	bint2_len=len(bin(int2)[2:])

	if bint1_len>bint2_len:
		total_len=bint1_len
	else:
		total_len=bint2_len
	
	if total_len>len(bxored):
		holder=['1' for addit in range(total_len-len(bxored))]
	else:
		holder=[]

	for element in bxored:
		if element=='1':
			holder.append('0')
		elif element=='0':
			holder.append('1')

	return int(''.join(holder), 2)