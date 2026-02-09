# MY and Aven

import random

s_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]


A = 1

C = 0
    
while A == 1:
    print(f"{s_list[0]}|{s_list[1]}|{s_list[2]}")
    print("----")
    print(f"{s_list[3]}|{s_list[4]}|{s_list[5]}")
    print("-----")
    print(f"{s_list[6]}|{s_list[7]}|{s_list[8]}")
    
    s_list[(int(input("Which place would you like to change?: ")))-1] = "x"
    print(s_list)
    
    C = 0

    while C == 0:
        computer_choice = random.choice(s_list)
    
        if not computer_choice == "o" or computer_choice == "x": 
            C += 1
    
    s_list[computer_choice] = "o"