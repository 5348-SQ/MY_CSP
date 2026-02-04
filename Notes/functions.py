def hello(name):
    print(f"Hellow {name}!")

def full_name(first_name, last_name):
    return f"{first_name} {last_name}"

print(f"Hello {full_name('BOB', 'BOBER')}")
person_one = full_name("AB", "Bo")
print(f"The second person is {person_one}")
person = full_name("VAb", "TAB")
hello(person)

#MATHTHINGSSSSS

#number = int(input("number: "))

def factorial(number):
    total = 1
    #-1 is what we count by
    for x in range(number, 1, -1):
        total *= x
    return total


for y in range(1,10):
    print(f"The factorial of {y} is {factorial(y)}")

num = 1

def add():
    num += 1
    print(num)

print(num)