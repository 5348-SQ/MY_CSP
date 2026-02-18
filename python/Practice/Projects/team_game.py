# MY and AC, P6

import random

#Win check function, written by MY
def who_win(X, Y, Z):
    if X == "x" and Y == "x" and Z == "x": 
        #then player won
        return 1
    elif X == "o" and Y == "o" and Z == "o":
        #then computer won
        return 2
    else:
        return 0
    
#board print function, written by MY
def printboard():
    print(f"{s_list[0]}|{s_list[1]}|{s_list[2]}")
    print("----")
    print(f"{s_list[3]}|{s_list[4]}|{s_list[5]}")
    print("-----")
    print(f"{s_list[6]}|{s_list[7]}|{s_list[8]}")

#tie checker, written by MY
def check(checked):
    if type(s_list[checked]) == str:
        return True


#set up zone, written by MY
print("All inputs must be intigers")

s_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]

winner = 0 

#central loop, written MY
while winner == 0:
    #Board print zone
    printboard()
    
#player answer zone, written by MY

    

    playerlooplock = 0

    while playerlooplock == 0:
        choice = int(input("Which place would you like to change?: "))-1

        if s_list[choice] == "o" or s_list[choice] == "x": 
            print("That spot is taken, try again.")
        else:
            playerlooplock += 1


    s_list[choice] = "x"

#computer answer zone, written by MY and AC

    computer_looplock = 0

    while computer_looplock == 0:
      #random.choice returns the item itself not the index # of the item
        computer_choice = random.choice(s_list)
    
        if not computer_choice == "o" and not computer_choice == "x": 
            computer_looplock += 1
            s_list[computer_choice-1] = "o"
        elif check(0) == True and check(1) == True and check(2) == True and check(3) == True and check(4) == True and check(5) == True and check(6) == True and check(7) == True and check(8) == True:
            computer_looplock += 1
            print("Tie!")
    
    
   

#Win check, written by AC                         
    winner += who_win( s_list[0], s_list[1], s_list[2])
    
    winner += who_win( s_list[3], s_list[4], s_list[5])

    winner += who_win( s_list[6], s_list[7], s_list[8])

    winner += who_win( s_list[0], s_list[4], s_list[8])

    winner += who_win( s_list[2], s_list[7], s_list[8])

    winner += who_win( s_list[0], s_list[3], s_list[6])

    winner += who_win( s_list[1], s_list[4], s_list[7])

    winner += who_win( s_list[2], s_list[5], s_list[8])    

#If this line is reached game loop has been broken becuse somone won.



#game win results, written by MY

if winner == 1:
    #then player won
    print("Congradulations you win!")

    printboard()

    
elif winner == 2:
    #then com won
    print("YOU LOSE!")

    printboard()