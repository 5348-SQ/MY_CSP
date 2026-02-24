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

    printf("\nYour rent is $%.2f and that is %.2f precent of your income", rent, (rent/inco)*100);

    printf("\nYour utilities is $%.2f and that is %.2f precent of your income", util, (util/inco)*100);

    printf("\nYour groceries is $%.2f and that is %.2f precent of your income", groc, (groc/inco)*100);

    printf("\nYour transportation expences sum to $%.2f, which is %.2f precent of your income", groc, (groc/inco)*100);

    printf("It is advised you add $%.2f to your savings", inco * 0.1);

    prinft("This leaves you with $%.2f to spend", inco-((groc+util+rent+tran)+ inco * 0.1 ));
    //PLEASE TEACH US HOW TO WRITE FUNCTIONS ALREADY
    return 0;

}