import propellant





end=256


def encrypt(user_input):
    encoded=user_input.encode()
    raw_list=list(encoded)

    filtred=[]
    key=[]


    for element in raw_list:
        key_value=propellant.propellant()

        key_gen=key_value%end
        encrypted=element+key_gen
        acceptable=encrypted%end

        key.append(chr(key_gen+200))

        filtred.append(chr(acceptable+200))


    finished_string=''.join(filtred)
    finished_key=''.join(key)

    return (finished_string, finished_key)







def decrypt (encrypted_string, key):

    encrypted_list=list(encrypted_string)
    key_list=list(key)

    string=[]
    key=[]


    for element in encrypted_list:
        string.append(ord(element)-200)

    for element in key_list:
        key.append(ord(element)-200)


    decrypted_list=[]

    for index in range(len(string)):
        decrypted_element=string[index]-key[index]

        if decrypted_element>=0:
            decrypted_list.append(decrypted_element)
        else:
            final=decrypted_element+end
            decrypted_list.append(final)

    byted=bytes(decrypted_list)
    decoded=byted.decode()

    return decoded







