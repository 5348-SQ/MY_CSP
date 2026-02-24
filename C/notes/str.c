//MY 6 notes strings

#include <stdio.h>

#include <string.h>
//Must include this /\ to use Concatenation

int main(){
    char subject[] = "Math";
    char fruit[] = "Tomomo";
    char book[50];

    printf("subject: %s\nfruit:%s\n", subject, fruit);

    printf("WHAT IS THEY FAV BOOK MORTAL?: ");
    fgets(book, sizeof(book), stdin);
    printf("YOU FAV BOOK IS %s?!?!?!\n", book);

    //Concatenation!
    char first[] = "Milo";
    char last[] = "Yuan";

    strcat(first, " ");
    strcat(first, last);

    printf("%s\n", first);

    //WARING IF THERE IS NO ENOUGH CHAR [#] IS NOT BIGENOUGH TO FIT THE STCAT, IT BRaKE


    //To find string list
    printf("%lu\n", strlen(first));

    return 0;
}