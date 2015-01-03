from threading import Thread


def propellant():

	def generate():
		num_gen='bullet_parts/number.num'


		def zero():
			start=0

			while start<=0:
				start+=1

			with open (num_gen, 'a') as opener:
				opener.write(str(start))


		def one():
			start=0

			while start<=1:
				start+=1

			with open (num_gen, 'a') as opener:
				opener.write(str(start))


		def two():
			start=0

			while start<=2:
				start+=1

			with open (num_gen, 'a') as opener:
				opener.write(str(start))


		def three():
			start=0

			while start<=3:
				start+=1

			with open (num_gen, 'a') as opener:
				opener.write(str(start))


		def four():
			start=0

			while start<=4:
				start+=1

			with open (num_gen, 'a') as opener:
				opener.write(str(start))

		def five():
			start=0

			while start<=5:
				start+=1

			with open (num_gen, 'a') as opener:
				opener.write(str(start))

		def six():
			start=0

			while start<=6:
				start+=1

			with open (num_gen, 'a') as opener:
				opener.write(str(start))

		def seven():
			start=0

			while start<=7:
				start+=1

			with open (num_gen, 'a') as opener:
				opener.write(str(start))

		def eight():
			start=0

			while start<=8:
				start+=1

			with open (num_gen, 'a') as opener:
				opener.write(str(start))

		def nine():
			start=0

			while start<=9:
				start+=1

			with open (num_gen, 'a') as opener:
				opener.write(str(start))


		#==================================================

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

		#==================================================

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


		def final_set():
			thread=Thread(target=thread_set)
			thread.start()


		ithread_1=Thread(target=final_set)
		ithread_2=Thread(target=final_set)
		ithread_1.start()
		ithread_2.start()



		reader=open(num_gen, 'r').read()

		with open(num_gen, 'w') as opener:
			opener.write('')

		return int(reader)


	while  True:
		try:
			return generate()
		except:
			pass