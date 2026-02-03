#While
import random #Libary imported is always at top


'''count = 0

while count <= 10:
    print(count)
    count += 1
print("the loop is over")

# "+=" means to increase the varible


goose = random.randint(1,26) #I want a random numbe between 1 and 25 so I write (1,26)

count2 = 0


#not equal = "!="
while count2 != goose:
    print("Duck")
    count2 += 1
print("GOOSE!!!!")






number = random.randint(1,20)

while True:
    guess = int(input("Tell me a number between 1 and 20: "))
    if guess == number:
        print(f"Ye won! numer = {number}")
        break
    elif guess < number:
        print("More")
    elif guess > number:
        print("Less")'''
#break forces loop to stop when its hit

#iteration is => repetition wiht small changes

for i in range(20):
    print(f"My code has iterated {i} times")
