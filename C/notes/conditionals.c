//MY P6 conditionals

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int grade = 97;

    bool ispro = true;

    if (grade >= 90){
        printf("Your greade is %d precent, thats an A!\n", grade);
    }else if (grade >= 80 ){
        printf("Your greade is %d precent, thats an B!\n", grade);
    }else if (grade >= 70){
        printf("Your greade is %d precent, thats an C!\n", grade);
    }else if (grade >= 60){
        printf("Your greade is %d precent, thats an D!\n", grade);
    }else{
        printf("Your greade is %d precent, thats an FFFFFF!\n", grade);
    };

    int num = 4;

    if(num < 10 && num > 1){
        printf("Your num is %d and is negitive", num);
    }else if(num <10){
        printf("number is %d, thats a single diget number\n", num);
    }else if (num < 100){
        printf("Your number is %d, that is a double digit number\n", num);
    }else{
        printf("Your number is %d, that is a BIG NUM\n", num);
    };

    char name[] = "YOU";

    if (strcmp(name, "YOU") == 0){
        printf("HI ADMIN");
    }else{
        printf("welcome %s!", name);
    };

    return 0;
}