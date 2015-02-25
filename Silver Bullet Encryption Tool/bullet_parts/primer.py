import random
import zlib

from bullet_parts import propellant



def encrypt(user_input, passphrase):

    compressed=zlib.compress(user_input.encode())

    ui_numbered=int.from_bytes(compressed, byteorder='big', signed=False)

    #==============================

    pad=0

    while pad<ui_numbered:
        random.seed(propellant.propellant())
        pad+=random.randrange(ui_numbered)

        desolved_pad=list(str(pad))
        random.seed(propellant.propellant())
        random.shuffle(desolved_pad)
        pad=int(''.join(desolved_pad))

    cipher_text=ui_numbered^pad

    #==============================

    random.seed(passphrase)

    locker=random.randrange(cipher_text)

    while cipher_text>locker:
        another=random.randrange(cipher_text)
        locker+=another

        desolved_locker=list(str(locker))
        random.shuffle(desolved_locker)
        locker=int(''.join(desolved_locker))

    locked_pad=pad+locker

    return (str(cipher_text), str(locked_pad))













def decrypt(cipher_text, locked_pad, passphrase):

    cipher_text=int(cipher_text)
    locked_pad=int(locked_pad)

    random.seed(passphrase)

    locker=random.randrange(cipher_text)

    while cipher_text>locker:
        another=random.randrange(cipher_text)
        locker+=another

        desolved_locker=list(str(locker))
        random.shuffle(desolved_locker)
        locker=int(''.join(desolved_locker))


    pad=locked_pad-locker

    #========================

    deciphered=cipher_text^pad

    byted=deciphered.to_bytes((deciphered.bit_length()+7)//8, 'big')

    decompressed=zlib.decompress(byted).decode()

    return decompressed