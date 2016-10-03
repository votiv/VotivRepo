def write_stuff():
    name = input('What\'s ur name?')
    number = 0;

    while (int(number) != 22):
        number = input('Enter a number, ' + name + '!')

        if int(number) > 5 and int(number) != 22:
            print('Ur too complicated!')
        elif int(number) == 22:
            print('Ur my kind of person')
        else:
            print('Booooooring...')


write_stuff()
