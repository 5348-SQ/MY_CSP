//MY arrays

#include <stdio.h>

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

    return 0;
}