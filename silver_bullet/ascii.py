'''
'''


ascii_value=256

def contain_ascii(value):
	if value<0:
		return value+ascii_value

	elif value>=ascii_value:
		return value-ascii_value
	else:
		return value