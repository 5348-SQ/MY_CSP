# MY and Aven

import random

def who_win(X, Y, Z):
    if X == "x" and Y == "x" and Z == "x":
        print("Player wins")
        return 1
    elif X == "o" and Y == "o" and Z == "o":
        print("Computer wins")
        return 2
    else:
        return 0
        





s_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]

A = 1

C = 0
    
while A == 1:
    
    print(f"{s_list[0]}|{s_list[1]}|{s_list[2]}")
    print("----")
    print(f"{s_list[3]}|{s_list[4]}|{s_list[5]}")
    print("-----")
    print(f"{s_list[6]}|{s_list[7]}|{s_list[8]}")
    
#player answer zone

    ina = int(input("Which place would you like to change?: "))

    D = 0

    while D == 0:
    
        if not ina == "o" or ina == "x": 
            D += 1


    s_list[ina-1] = "x"

#computer answer zone

    C = 0

    while C == 0:
        #random.choice returns the item itself not the index # of the item
        computer_choice = random.choice(s_list)
        print(computer_choice)
        if not computer_choice == "o" and not computer_choice == "x": 
            C += 1
    
    s_list[computer_choice-1] = "o"

    A += who_win( s_list[0], s_list[1], s_list[2])

    A += who_win( s_list[3], s_list[4], s_list[5])

    A += who_win( s_list[6], s_list[7], s_list[8])

    A += who_win( s_list[0], s_list[4], s_list[8])

    A += who_win( s_list[2], s_list[7], s_list[8])

    A += who_win( s_list[0], s_list[3], s_list[6])

    A += who_win( s_list[1], s_list[4], s_list[7])

    A += who_win( s_list[2], s_list[5], s_list[8])    


if A == 1:
    #then player won
    print("w")
    print(A)

    print(f"{s_list[0]}|{s_list[1]}|{s_list[2]}")
    print("----")
    print(f"{s_list[3]}|{s_list[4]}|{s_list[5]}")
    print("-----")
    print(f"{s_list[6]}|{s_list[7]}|{s_list[8]}")


    
elif A == 2:
    #then com won
    print("L")

    print(A)
    print(f"{s_list[0]}|{s_list[1]}|{s_list[2]}")
    print("----")
    print(f"{s_list[3]}|{s_list[4]}|{s_list[5]}")
    print("-----")
    print(f"{s_list[6]}|{s_list[7]}|{s_list[8]}")