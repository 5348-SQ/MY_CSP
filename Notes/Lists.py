numbers = [243,2433,4325,342,231456,5,4365]

n = ["A1", "A2", "A3", "A4"]


print(len(n))
n[0] = "B1"

n.append("Jayshree") #adds to the end of the list

"""n.pop[] #removes thrid item on list"""

n.pop(3) # removes item on list 

print(n)

#ends at end of list
for name in n:
    print(f"Hello {name}")

    for number in numbers:
        print(f"{number} - 10 = {number - 10}")