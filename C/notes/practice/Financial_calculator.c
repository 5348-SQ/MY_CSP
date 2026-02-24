//MY P6 Financial_Calculator

#include <stdio.h>

#include <math.h>

int main(){

    float inco;
    float rent;
    float util;
    float groc;
    float tran;
    
    
    printf("What is thy income?:$ ");
    scanf("%f", &inco);

    printf("\nWhat is thy rent?: ");
    scanf("%f", &rent);

    printf("\nWhat is thy utilities?:$ ");
    scanf("%f", &util);

    printf("\nWhat is thy groceries:$ ");
    scanf("%f", &groc);

    printf("\nWhat is thy transportation expence?:$ ");
    scanf("%f", &tran);

    printf("\nYour rent is %.2f and that is %.2f precent of your income", rent, int((rent/inco)*100));

    return 0;

}