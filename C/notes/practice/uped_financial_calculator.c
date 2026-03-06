//My P6 Updated Financial calculator

#include <stdio.h>
#include <math.h>

void printer(float part,float whole, char* partname){
    int partofwhole = round((part/whole)*100);
    printf("\nYour %s is $%.2f and that is %d precent of your income", partname, part, partofwhole);
}

float num_getter(char* is){
    float num;
    printf("MORTAL, WHAT IS THY %s?: $", is);
    scanf("%f", &num);
    return num;
}

int main(){
    float income = num_getter("income");
    float rent = num_getter("rent");
    float utilities = num_getter("utilities");
    float groceries = num_getter("groceries");
    float transportation = num_getter("transportation");

    printer(rent,income, "rent");
    printer(utilities,income, "utilities");
    printer(groceries,income, "groceries");
    printer(transportation,income, "transportation");

    float save = income*0.1;

    printf("\nIt is advised you add $%.2f to your savings", save);

    printf("\nThis leaves you with $%.2f of your income left to spend", income-(rent+utilities+groceries+transportation+save));


    return 0;
}