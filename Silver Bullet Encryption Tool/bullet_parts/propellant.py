import os
from threading import Thread



def propellant():

	def generate():
	    num_gen='bullet_parts/number.num'
	    check=os.path.isfile(num_gen)

	    if check is True:
	        pass
	    else:
	        with open (num_gen, 'w') as opener:
	            opener.write('')
	    

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




	    def start_set():
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

	    def thread_set_1():
	        thread_1=Thread(target=start_set)
	        thread_2=Thread(target=start_set)
	        thread_1.start()
	        thread_2.start()

	    def thread_set_2():
	        thread_1=Thread(target=start_set)
	        thread_2=Thread(target=start_set)
	        thread_1.start()
	        thread_2.start()



	    thread_set_2()

	    
	    reader=open(num_gen, 'r').read()

	    with open(num_gen, 'w') as opener:
	        opener.write('')

	    return int(reader)


	while  True:
		try:
			return generate()
		except:
			pass
