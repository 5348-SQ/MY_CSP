//MY arrays

#include <stdio.h>

int main(){
    //EX 1
    int grades[] = {28,78,99,26,0};
    //28 has an index of 0
    printf("%d\n", grades[2]); //single item from the array based on index number

    grades[2] = 85;

    printf("%d\n", grades[2]);
    return 0;
}