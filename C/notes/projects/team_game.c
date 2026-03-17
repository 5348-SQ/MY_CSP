//P6, MY D?, Programming Project - C
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

//For random
#include <time.h>
#include <stdlib.h>

//Maybe if I feel funny I will change the win condition to the player being in a tie -MY

//global varibal set up

char board_state[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
bool anyone_won = false;

// Win check funciton made by MY

int winner_finder(char first_in_row, char second_in_row, char thrird_in_row){
    if ( first_in_row == 'X' && second_in_row == 'X' && thrird_in_row == 'X'){
        //Then player won
        return 1;
    }
    else if ( first_in_row == 'O' && second_in_row == 'O' && thrird_in_row == 'O'){
        //Then computer won
        return 2;
    }
    else{
        return 0;
    }
}

///Board print function written by MY

void printboard(){
    printf("%c|%c|%c\n", board_state[0], board_state[1], board_state[2]);
    printf("-----\n");
    printf("%c|%c|%c\n", board_state[3], board_state[4], board_state[5]);
    printf("-----\n");
    printf("%c|%c|%c\n",board_state[6], board_state[7], board_state[8]);
}



int main(){
    //Set up zone by MY
    

    printf("Welcome to Tic Tac Toe. There are some things you must know.\n");
    printf("All inputs must be intigers, else the machine spirit residing inside your computer will try to rebel.\n");
    printf("There may be more.\n");
    
    //Primary Loop made by MY

    

    while (anyone_won == false){

        printboard();

        //Player answer zone made by My
        bool valid_player_answer = false;

        int player_choice;
        while(valid_player_answer == false){
            

            printf("Which place would you like to change?: \n");
            scanf("%d", &player_choice);

            if(board_state[player_choice] == 'O' || board_state[player_choice] == 'X'|| player_choice < 0 || player_choice > 8){
                printf("INVALID, try again.\n");

            }
            else{
                board_state[player_choice] = 'X';
                valid_player_answer = true;
            }
        }

            

        //Computer answer zone written by MY
        bool valid_computer_choice = false;
        while(valid_computer_choice == false){
            int computer_choice = rand() %8;
            if (board_state[computer_choice] == )
        }



        //MAKE THING THAT SETS ANYONE TO TRUE WHEN COM OR PLAYER WON
    }
    return 0;
}