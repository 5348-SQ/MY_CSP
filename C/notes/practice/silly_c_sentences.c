//MY P6 Silly sentences

#include <stdio.h>

#include <string.h>

int main(){
    char verb_1[50];
    char noun_1[50];
    char verb_2[50];

    printf("GIVE VERB: \n");
    scanf("%s", &verb_1);

    printf("GIVE NOUN: \n");
    scanf("%s", &noun_1);

    printf("GIVE ANOTHER VERB: \n");
    scanf("%s", &verb_2);


    strcat(verb_1, "ed");
    strcat(verb_2, "ed");


    printf("You %s your greatest %s, on the day you %s %s.", verb_1, noun_1, verb_2, noun_1);



    return 0;
}