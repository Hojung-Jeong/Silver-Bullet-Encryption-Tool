'''
>List of functions
	1. contain(value,limit)	-	contains a value between 0 to limit
'''


def contain(value,limit):
	if value<0:
		return value+limit
	elif value>=limit:
		return value-limit
	else:
		return value