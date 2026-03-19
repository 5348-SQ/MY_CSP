//P6, MY DS, Programming Project - C
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

bool player_won = false;
bool computer_won = false;
bool tie = false;

int total_computer_tries = 0;

// Win check funciton made by MY

void winner_finder(char first_in_row, char second_in_row, char thrird_in_row){
    if ( first_in_row == 'X' && second_in_row == 'X' && thrird_in_row == 'X'){
        //Then player won
        player_won = true;
        anyone_won = true;
    }
    else if ( first_in_row == 'O' && second_in_row == 'O' && thrird_in_row == 'O'){
        //Then computer won
        computer_won = true;
        anyone_won = true;
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

        printf("\n");
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
        int computer_tries = 0;

        while(valid_computer_choice == false){
            int computer_choice = rand() %9; 
            if(computer_tries > 34){
                tie = true;
                anyone_won = true;
                valid_computer_choice = true;
            }
            else if (board_state[computer_choice] == 'X' || board_state[computer_choice] == 'O'){
                //Nothing Really happens
                computer_tries++;
            }
           
        
            else{
                valid_computer_choice = true;
                board_state[computer_choice] = 'O';
            }
        }
        if (computer_tries > 0){
                printf("\nFUN FACT IT TOOK THE COMPUTER %d ATTEMPT(S) TO FIND A VALID SPACE\n", computer_tries);
                total_computer_tries = total_computer_tries + computer_tries;
            }

        //Win Conditions by DS
        winner_finder(board_state[0],board_state[1], board_state[2]);
        winner_finder(board_state[3],board_state[4], board_state[5]);
        winner_finder(board_state[6],board_state[7], board_state[8]);
        winner_finder(board_state[0],board_state[4], board_state[8]);
        winner_finder(board_state[2],board_state[4], board_state[6]);
        winner_finder(board_state[0],board_state[3], board_state[6]);
        winner_finder(board_state[1],board_state[4], board_state[7]);
        winner_finder(board_state[2],board_state[5], board_state[8]);



        
    }
    printf("\nDEV NOTIFICATION: PRIMARY WHILE LOOP BROKE\n");
    //Win results zone made by DS
    if (player_won == true){
        printf("\n");
        printboard();
        printf("\nYou win");
    }

    else if (computer_won==true){
        printf("\n");
        printboard();
        printf("\nYou lost");
    }
    else if (tie == true){
        printf("\n");
        printboard();
        printf("\nTHE COMPUTER HAS SPOKEN\nIT GAVE UP\n You win by defult");
    }
    // FUN FACT made by MY
    printf("\n\nFUN FACT: IT TOOK THE COMPUTER A TOTAL OF %d ATTEMPTS TO FIND A VALID SPACE FOR THIS GAME TO END.", total_computer_tries);
    return 0;
}