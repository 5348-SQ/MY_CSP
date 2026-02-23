//MY P6 Financial_Calculator

int main(){
    float inco;
    float rent;
    float util;
    float groc;
    float tran;
    
    
    printf("What is thy income?:$ ");
    scanf("%f", &inco);

    printf("\nWhat is thy rent?:$ ");
    scanf("%f", &rent);

    printf("\nWhat is thy utilities?:$ ");
    scanf("%f", &util);

    printf("\nWhat is thy groceries:$ ");
    scanf("%f", &groc);

    printf("\nWhat is thy transportation expence?:$ ");
    scanf("%f", &inco);

    printf("\nYour rent is %f and that is %.2f precent of your income", &rent, &(rent/inco)*100);

}