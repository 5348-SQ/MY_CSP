// this is how comments are done in C!
#include <stdio.h> //enables inputs and outputs

//Everything has to be a function in C

//use run C/C++ to run

int main(){
    int number = 8;
    const float pi = 3.14;
    char grade = 'A'; //single charicters uses single quotes
    char name[] = "Jake"; //strings use [] after naming the variable
    char user[50];
    //to creat an input in C. 1, creat a variable. 2, ask the user a question. 3, collect the answer (use scanf for this)

    printf("GIVE NAME: \n");
    scanf("%s", &user);

    printf("GIVE NUMBER: \n");

    scanf("%d", &number);
    // if input is not int it becomes 0


    //use "/n" to break a line, you can do mutiple \n to skip mutiple lines

    printf("%d\n", number);
    printf("the digits of pi are: %f\n", pi);
    printf("Your name is %s you are %d old. You have an %c in programing. pi is %f\n", user, number, grade, pi);
    return 0;
}