//MY arrays

#include <stdio.h>
//for random
#include <time.h>
#include <stdlib.h>


int main(){
    //Example 1
    int grades[] = {28,78,99,26,0};
    //28 has an index of 0
    printf("%d\n", grades[2]); //single item from the array based on index number

    grades[2] = 85;

    printf("%d\n", grades[2]);
    

    //Example 2
    float distance[] = {2.34, 0.98, 123.2};
    //An idea I had \/
    distance[2] = distance[2] + 3.78;

    //Example 3
    char nas[][50] = {"Kat", "SHia", "baer", "lol", "Voxi", "alibia", "ohi", "shkio"};
    printf("%s\n", nas[0]);


    //first bracket is items in list and second are max charicters per item

    //for loops example 1

    for(int a = 20; 1 <= 0; a--){
        //"--" = "-1"
        printf("%d", a);
    }

    //for loops example 2
    int grade_len = sizeof(grades)/ sizeof(grades[0]);
    for(int index = 0; index < grade_len; index++){
        printf(" %d", grades[index] + 5);

    }

    //for loops example 3
    srand(time(NULL));
    int goose = rand() %15 +1;

    for(int count = 1; count < goose; count++){
        printf("\nduck");
    }
    printf("\nGoooooooose!");


    return 0;
}