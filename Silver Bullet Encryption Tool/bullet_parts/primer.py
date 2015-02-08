import propellant
import random
import zlib




def encrypt(user_input, passphrase):

    compressed=zlib.compress(user_input.encode())

    ui_numbered=int.from_bytes(compressed, byteorder='big', signed=False)

    #==============================

    pad=propellant.propellant()

    counter=0

    while ui_numbered>pad:
        another=propellant.propellant()

        if another is not 0 and counter%2 is 0:
            pad*=another
        elif another is not 0 and counter%2 is 1:
            pad+=another
        else:
            pass

        counter+=1


    cipher_text=ui_numbered^pad

    #==============================

    random.seed(passphrase)

    locker=random.randrange(cipher_text)

    counter=0

    while cipher_text>locker:
        another=random.randrange(cipher_text)

        if another is not 0 and counter%2 is 0:
            locker*=another
        elif another is not 0 and counter%2 is 1:
            locker+=another
        else:
            pass

        counter+=1

    locked_pad=pad^locker

    return (str(cipher_text), str(locked_pad))













def decrypt(cipher_text, locked_pad, passphrase):

    cipher_text=int(cipher_text)
    locked_pad=int(locked_pad)

    random.seed(passphrase)

    locker=random.randrange(cipher_text)

    counter=0

    while cipher_text>locker:
        another=random.randrange(cipher_text)

        if another is not 0 and counter%2 is 0:
            locker*=another
        elif another is not 0 and counter%2 is 1:
            locker+=another
        else:
            pass

        counter+=1

    pad=locked_pad^locker

    #========================

    deciphered=cipher_text^pad

    byted=deciphered.to_bytes((deciphered.bit_length()+7)//8, 'big')

    decompressed=zlib.decompress(byted).decode()

    return decompressed