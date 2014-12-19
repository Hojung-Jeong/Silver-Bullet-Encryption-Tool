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




		def thread_set_1():
			thread_0=Thread(target=zero)
			thread_1=Thread(target=one)
			thread_2=Thread(target=two)
			thread_3=Thread(target=three)
			thread_4=Thread(target=four)
			thread_5=Thread(target=five)
			thread_6=Thread(target=six)
			thread_7=Thread(target=seven)
			thread_8=Thread(target=eight)
			thread_9=Thread(target=nine)
			thread_0.start()
			thread_1.start()
			thread_2.start()
			thread_3.start()
			thread_4.start()
			thread_5.start()
			thread_6.start()
			thread_7.start()
			thread_8.start()
			thread_9.start()

		def thread_set_2():
			thread_0=Thread(target=nine)
			thread_1=Thread(target=eight)
			thread_2=Thread(target=seven)
			thread_3=Thread(target=six)
			thread_4=Thread(target=five)
			thread_5=Thread(target=four)
			thread_6=Thread(target=three)
			thread_7=Thread(target=two)
			thread_8=Thread(target=one)
			thread_9=Thread(target=zero)
			thread_0.start()
			thread_1.start()
			thread_2.start()
			thread_3.start()
			thread_4.start()
			thread_5.start()
			thread_6.start()
			thread_7.start()
			thread_8.start()
			thread_9.start()

		thread_1=Thread(target=thread_set_1)
		thread_2=Thread(target=thread_set_2)
		thread_1.start()
		thread_2.start()


		reader=open(num_gen, 'r').read()

		with open(num_gen, 'w') as opener:
			opener.write('')

		return int(reader)


	while  True:
		try:
			return generate()
		except:
			pass