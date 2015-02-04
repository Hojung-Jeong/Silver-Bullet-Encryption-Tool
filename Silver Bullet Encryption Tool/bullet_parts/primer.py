import propellant
import random




end=256
sudo=256
separator=' '



def encrypt(user_input, passphrase):
    ui_encoded=user_input.encode()
    ui_listed=list(ui_encoded)

    pp_encoded=passphrase.encode()
    pp_listed=list(pp_encoded)
    seed=int(''.join(map(str, pp_listed)))

    random.seed(seed)

    encrypted=[]
    key=[]

    for element in ui_listed:
        raw_key=propellant.propellant()%end

        ciphered=(element+raw_key)%end
        pkey=raw_key*random.randrange(sudo)

        encrypted.append(str(ciphered))
        encrypted.append(separator)
        key.append(str(pkey))
        key.append(separator)


    encrypted.pop()
    key.pop()

    finished_string=''.join(encrypted)
    finished_key=''.join(key)

    return (finished_string, finished_key)








def decrypt(encrypted_string, key, passphrase):
    listed_string=encrypted_string.split(separator)
    listed_key=key.split(separator)

    pp_encoded=passphrase.encode()
    pp_listed=list(pp_encoded)
    seed=int(''.join(map(str, pp_listed)))

    random.seed(seed)

    string=[]
    key=[]

    for element in listed_string:
        string.append(int(element))

    for element in listed_key:
        key.append(int(round(int(element)/random.randrange(sudo))))


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