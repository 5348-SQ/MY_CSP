//P6, MY D?, Programming Project - C
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

//For random
#include <time.h>
#include <stdlib.h>

//Maybe if I feel funny I will change the win condition to the player being in a tie -MY

// A funciton made by MY

int who_win(first_in_row, second_in_row, thrird_in_row){
    if ( first_in_row == "X" && second_in_row == "X" && thrird_in_row == "X"){
        //Then player won
        return 1;
    }
    else if ( first_in_row == "O" && second_in_row == "O" && thrird_in_row == "O"){
        //Then computer won
        return 2;
    }
    else{
        return 0;
    }
}

///Board print function written by MY

void printboard(char list[]){
    printf("%s|%s|%s\n", list[0], list[1], list[2]);
    printf("-----\n");
    printf("%s|%s|%s\n", list[3], list[4], list[5]);
    printf("-----\n");
    printf("%s|%s|%s\n",list[6], list[7], list[8]);
}


int main{
    //Set up zone by MY
    char board_state[9][15] = {"0", "1", "2", "3", "4", "5", "6", "7", "8"};

    printf("Welcome to Tic Tac Toe. There are some things you must know.\n");
    printf("All inputs must be intigers, else the machine spirit residing inside your computer will try to rebel.\n");
    printf("There may be more.\n");
    
    //Primary Loop made by MY

    bool player_won = true;

    while (player_won == True){

        //Player answer zone made by My
        bool valid_player_answer == false;

        while valid_player_answer == false{
            int player_choice;

            printf("Which place would you like to change?: ");
            scanf("%d", &player_choice);

            if(board_state[player_choice] == "O" || board_state[player_choice] == "X"){
                printf("That place is taken, try again.\n")

            }
        }




    }
    return 0;
}