#MY FuzzBuzz

#Im going to need a modulo
#modulo divides a number and takes remainder


for number in range(1,51):
    if number%5 == 0 and number%3 == 0:
        print("FizzBuzz")
    elif number%3 == 0:
        print("Fuzz")
    elif number%5 == 0:
        print("Buzz")
    
    else: print(number)