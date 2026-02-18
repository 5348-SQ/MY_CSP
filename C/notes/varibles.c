// this is how comments are done in C!
#include <stdio.h> //enables inputs and outputs

//Everything has to be a function in C

//use run C/C++ to run

int main(){
    int number = 8;
    float pi = 3.14;
    char grade = 'A'; //single charicters uses single quotes
    char name[] = "Jake"; //strings use [] after naming the variable

    //use "/n" to break a line, you can do mutiple \n to skip mutiple lines

    printf("%d\n", number);
    printf("the digits of pi are: %f\n", pi);
    printf("Your name is %s you are %d old. You have an %c in programing. pi is %f\n", name, number, grade, pi);
    return 0;
}