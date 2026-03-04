//MY while loops
#include <stdio.h>
//include for breaks
#include <stdbool.h>

//include the bellow for random
#include <time.h>
#include <stdlib.h>

int main(){
    

    


    int i = 1;

    while (i <= 10){
        printf("%d\n", i);
        i ++; //increases i by 1
    }

    //Get rand number
    srand(time(NULL)); //lets us creat random number

    //put % max + 1 to limit the random, can generate between 0 and 10 bellow
    printf("%d\n", rand()%11);

    // this one can generate a number between 5 and 10?
    printf("%d\n", (rand()%10) + 5);

    printf("%d\n", rand()%11);



    //example 2

    int goose = rand() %10 + 1;
    int count = 1;

    while(count < goose){
        printf("Duck\n");
        count++;
    }
    printf("GOse!");

    //Example 3
    int number = rand() %20 +1;

    while(true){
        int guess;
        printf("GIVE NUMBER BETWEEN 1 AND 20: ");
        scanf("%d", &guess);
        if(guess == number){
            printf("You win, # was %d\n", number);
            break;
        }else if (guess < number){
            printf("HIGHER\n");
        }else{
            printf("LOWER\n");
        }
    }


    
    return 0;
}