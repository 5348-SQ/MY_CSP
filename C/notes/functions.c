//MY P6 function notes

#include <stdio.h>
int x = 0;

//when we build functions we don't build them inside other functions so we do it outside main


//example 1
void add(){
    x++;
}
//use void as data type when not returning

//example 2
float divide(int num_one, int num_two){
    return (float) num_one/ num_two;
}

//example 3
void hello(char* name){
    printf("Hello %s. welcome to this moment\n", name);

}

///char* means we are taking in all the charicters set as argument


int main(){
    //example 1 continued
    add();
    add();
    add();
    add();
    add();
    add();
    printf("%d\n", x);

    //example 2 continued
    float quotiant = divide(8,4);
    printf("%.2f\n", quotiant);
    printf("%.2f\n", divide(72,2));

    //Example 3 continued
    hello("Alex");
    hello("Bloy");
    hello("Gah");
    hello("cheseeeee");

    return 0;
}