from threading import Thread


def generate():

	num_gen='bullet_parts/number.num'


	def zero():
		with open (num_gen, 'a') as opener:
			opener.write('0')

	def one():
		with open (num_gen, 'a') as opener:
			opener.write('1')

	def two():
		with open (num_gen, 'a') as opener:
			opener.write('2')

	def three():
		with open (num_gen, 'a') as opener:
			opener.write('3')

	def four():
		with open (num_gen, 'a') as opener:
			opener.write('4')

	def five():
		with open (num_gen, 'a') as opener:
			opener.write('5')

	def six():
		with open (num_gen, 'a') as opener:
			opener.write('6')

	def seven():
		with open (num_gen, 'a') as opener:
			opener.write('7')

	def eight():
		with open (num_gen, 'a') as opener:
			opener.write('8')

	def nine():
		with open (num_gen, 'a') as opener:
			opener.write('9')

	#==================================


	def first():
		thread_1=Thread(target=zero)
		thread_2=Thread(target=nine)
		thread_1.start()
		thread_2.start()

	def second():
		thread_1=Thread(target=one)
		thread_2=Thread(target=eight)
		thread_1.start()
		thread_2.start()

	def third():
		thread_1=Thread(target=two)
		thread_2=Thread(target=seven)
		thread_1.start()
		thread_2.start()

	def fourth():
		thread_1=Thread(target=three)
		thread_2=Thread(target=six)
		thread_1.start()
		thread_2.start()

	def fifth():
		thread_1=Thread(target=four)
		thread_2=Thread(target=five)
		thread_1.start()
		thread_2.start()

	#================================

	def thread_set():
		thread_1=Thread(target=first)
		thread_2=Thread(target=second)
		thread_3=Thread(target=third)
		thread_4=Thread(target=fourth)
		thread_5=Thread(target=fifth)
		thread_1.start()
		thread_2.start()
		thread_3.start()
		thread_4.start()
		thread_5.start()


	ithread_1=Thread(target=thread_set)
	ithread_2=Thread(target=thread_set)
	ithread_1.start()
	ithread_2.start()


	#=================================


	reader=open(num_gen, 'r').read()

	with open(num_gen, 'w') as opener:
		opener.write('')

	return int(reader)










def propellant():
	while  True:
		try:
			return generate()
		except:
			pass