import propellant
import random



the_number=256



def encrypt(user_input, passphrase):
    encoded=user_input.encode()
    raw_list=list(encoded)

    encoded_pass=passphrase.encode()
    passlist=list(encoded_pass)
    seed=int(''.join(map(str, passlist)))

    random.seed(seed)

    filtred=[]
    key=[]


    for element in raw_list:
        key_value=propellant.propellant()

        key_gen=key_value%the_number
        encrypted=element+key_gen
        acceptable=encrypted%the_number

        key.append(chr(key_gen+the_number-random.randrange(the_number)))

        filtred.append(chr(acceptable+the_number))


    finished_string=''.join(filtred)
    finished_key=''.join(key)

    return (finished_string, finished_key)














def decrypt (encrypted_string, key, passphrase):

    encrypted_list=list(encrypted_string)
    key_list=list(key)

    string=[]
    key=[]

    encoded_pass=passphrase.encode()
    passlist=list(encoded_pass)
    seed=int(''.join(map(str, passlist)))

    random.seed(seed)


    for element in encrypted_list:
        string.append(ord(element)-the_number)

    for element in key_list:
        key.append(ord(element)-the_number)


    decrypted_list=[]

    for index in range(len(string)):
        decrypted_element=string[index]-key[index]+random.randrange(the_number)

        if decrypted_element>=0:
            decrypted_list.append(decrypted_element)
        else:
            final=decrypted_element+the_number
            decrypted_list.append(final)

    byted=bytes(decrypted_list)
    decoded=byted.decode()

    return decoded