//MY P6 Time of Day

#include <stdio.h>
#include <stdbool.h>


int main(){
    while (true == true){
    int time;

    printf("GIVE THE CURENT HOUR IN MILITARY TIME AND NO SPACES: ");

    scanf("%d", &time);

    if (time < 0 || time > 24){
        printf("You know what crime you commited. Please don't repeat your self.");
    }else if ( time >= 21 || time < 6){
        printf("Sleep Mode Activated");
    }else if (time >= 6 && time < 9){
        printf("Now Exicuting Function: 'Work Setup Routine'");
    }else if (time >= 9 && time < 16){
        printf("Work Mode Curently Primary Active Mode");
    }else if (time >= 16 && time < 20){
        printf("Work Mode Report:\nCurently Working at the PCL");
    }else if (time >= 20 || time <= 21){
        printf("Now Exicuting Function: 'Cool Down Routine'");
    }
    printf("\n\n");
}
    return 0;
}