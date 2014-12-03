import time
import os
from threading import Thread




#If your computer does not make enough data corruption, please increase the level value


def propellant(level=2):

    def generate():
        num_gen='bullet_parts/number.num'
        check=os.path.isfile(num_gen)

        if check is True:
            pass
        else:
            with open (num_gen, 'w') as opener:
                opener.write('')
        

        def timer():
            get_time=list(str(time.time()))

            holder=[]

            for element in get_time:
                if element is not '.':
                    holder.append(element)
                else:
                    holder.append(ord(element))

            for element in holder:
                with open (num_gen, 'a') as opener:
                    opener.write(str(element))



        def clock():
            get_time=list(str(time.clock()))

            holder=[]

            for element in get_time:
                if element is not '.':
                    holder.append(element)
                else:
                    holder.append(ord(element))

            for element in holder:
                with open (num_gen, 'a') as opener:
                    opener.write(str(element))



        def start_set():
            thread_1=Thread(target=timer)
            thread_2=Thread(target=clock)
            thread_1.start()
            thread_2.start()

        def thread_set_1():
            thread_1=Thread(target=start_set)
            thread_2=Thread(target=start_set)
            thread_1.start()
            thread_2.start()

        def thread_set_2():
            thread_1=Thread(target=thread_set_1)
            thread_2=Thread(target=thread_set_1)
            thread_1.start()
            thread_2.start()

        def thread_set_3():
            thread_1=Thread(target=thread_set_2)
            thread_2=Thread(target=thread_set_2)
            thread_1.start()
            thread_2.start()

        def thread_set_4():
            thread_1=Thread(target=thread_set_3)
            thread_2=Thread(target=thread_set_3)
            thread_1.start()
            thread_2.start()

        def thread_set_5():
            thread_1=Thread(target=thread_set_4)
            thread_2=Thread(target=thread_set_4)
            thread_1.start()
            thread_2.start()

        def thread_set_6():
            thread_1=Thread(target=thread_set_5)
            thread_2=Thread(target=thread_set_5)
            thread_1.start()
            thread_2.start()

        def thread_set_7():
            thread_1=Thread(target=thread_set_6)
            thread_2=Thread(target=thread_set_6)
            thread_1.start()
            thread_2.start()

        def thread_set_8():
            thread_1=Thread(target=thread_set_7)
            thread_2=Thread(target=thread_set_7)
            thread_1.start()
            thread_2.start()

        def thread_set_9():
            thread_1=Thread(target=thread_set_8)
            thread_2=Thread(target=thread_set_8)
            thread_1.start()
            thread_2.start()

        def thread_set_10():
            thread_1=Thread(target=thread_set_9)
            thread_2=Thread(target=thread_set_9)
            thread_1.start()
            thread_2.start()


        if level==1:
        	thread_set_1()
        if level==2:
        	thread_set_2()
        if level==3:
        	thread_set_3()
        if level==4:
        	thread_set_4()
        if level==5:
        	thread_set_5()
        if level==6:
        	thread_set_6()
        if level==7:
        	thread_set_7()
        if level==8:
        	thread_set_8()
        if level==9:
        	thread_set_9()
        if level==10:
        	thread_set_10()




        
        reader=open(num_gen, 'r').read()

        with open(num_gen, 'w') as opener:
            opener.write('')

        numbers=list(reader)


        joined=int(''.join(numbers))



        if joined is not None:
            return joined

        


    while True:
        try:
            return generate()
        except:
            pass

