import time
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



        def thread_set_1():
            thread_1=Thread(target=timer)
            thread_2=Thread(target=clock)
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


        thread_set_3()

        
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
