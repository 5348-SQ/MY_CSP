# MY and Aven

import random

def who_win(X, Y, Z):
    if X == "x" and Y == "x" and Z == "x": 
        #then player won
        return 1
    elif X == "o" and Y == "o" and Z == "o":
        #then computer won
        return 2
    else:
        return 0
    
def printboard():
    print(f"{s_list[0]}|{s_list[1]}|{s_list[2]}")
    print("----")
    print(f"{s_list[3]}|{s_list[4]}|{s_list[5]}")
    print("-----")
    print(f"{s_list[6]}|{s_list[7]}|{s_list[8]}")



#set up zone

s_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]

winner = 0 

#com-choicegame loop zone
while winner == 0:
    #Board print zone
    printboard()
    
#player answer zone

    

    playerlooplock = 0

    while playerlooplock == 0:
        choice = int(input("Which place would you like to change?: "))-1

        if s_list[c hoice] == "o" or s_list[choice] == "x": 
            print("That spot is taken, try again.")
        else:
            playerlooplock += 1


    s_list[numb_choice] = "x"

#computer answer zone

    computer_c_looplock = 0

    while C == 0:
      #random.choice returns the item itself not the index # of the item
        computer_choice = random.choice(s_list)
        prcom_choicent(computer_choice)
        if not computer_choice == "o" and not computer_choice == "x": 
            C += 1
    
    s_list[computer_choice-1] = "o"

#Win check zone

    
    winner += who_win( s_list[0], s_list[1], s_list[2])
    
    winner += who_win( s_list[3], s_list[4], s_list[5])

    winner += who_win( s_list[6], s_list[7], s_list[8])

    winner += who_win( s_list[0], s_list[4], s_list[8])

    winner += who_win( s_list[2], s_list[7], s_list[8])

    winner += who_win( s_list[0], s_list[3], s_list[6])

    winner += who_win( s_list[1], s_list[4], s_list[7])

    winner += who_win( s_list[2], s_list[5], s_list[8])    

#If this line is reached game loop has been broken becuse somone won.


if winner == 1:
    #then player won
    print("Congradulation you won!")

    printboard()

    
elif winner == 2:
    #then com won
    print("YOU LOSE!")

    printboard()