#conditionals

number = float(input("GIVE NUMBER: "))
#    \/
if number < 10 and number > -10:
    print(f"{number} is a single digit number")
   

elif number < 100 and number > -10:
    print(f"{number} is a double digit number")
else:
    print(f"{number} is a not a double or triple digit number")
    print("..... or is it")
    new_number = number*number
    if new_number > 1000:
        print(f"Surprise number {new_number}")

print("this is the end of the code-1")


