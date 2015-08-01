
dscontent='''
Welcome to a mini challenge!


Your task is to find the key for DECRYPTME.txt file, and reach the writing I hid.

Please be creative, and have fun!



***Hint for key***

Ymj jsynwj mzrfsnyd nx fs fgxtqzyj rjxx.

Ymjd fwj xywzllqnsl "yt gj mfuud" bnymtzy pstbnsl bmd ymjd fwj zsmfuud.

Ymfy'x bmd ymjd fwj zsmfuud.


'''


from tkinter import Tk,Label,Frame,StringVar,Entry,Button
from silver_bullet.TRNG import trng
from silver_bullet.symcrypt import sym_decrypt


def decryptor():
	key=isthiskey.get()

	reader=open('DECRYPTME.txt', 'r').read()
	cipher_text,locked_pad=reader.split('-')

	try:
		deciphered=sym_decrypt(cipher_text,locked_pad,key)

		with open("Success!", 'w') as opener:
			opener.write(deciphered)
	
	except:
		deciphered=''.join(map(str,[trng() for c in range(1000)]))

		with open("Decrypted", 'w') as opener:
			opener.write(deciphered)	



winmain=Tk()

width=800
height=400
screen_width=winmain.winfo_screenwidth()
screen_height=winmain.winfo_screenheight()
x=(screen_width/2)-(width/2)
y=(screen_height/2)-(height/2)
winmain.geometry('%dx%d+%d+%d'%(width,height,x,y))

description=Label(text=dscontent).pack()
guide=Label(text="Enter key below\n").pack()
isthiskey=StringVar()
enterkey=Entry(textvariable=isthiskey,width=93).pack()
dbutton=Button(text="Decrypt", command=decryptor).pack()

winmain.mainloop()