//MY floats and intigers

#include <stdio.h>

#include <math.h>
// YEAH NEED TO PUT THE IBID IN EVERY FILE YOU WANT TO MATH IN


int main(){

    int people = 11;
    int apples = 123;
    int room = 2;

    printf("%d, %d, %d\n", people, apples, room);
    printf("There are %.2f apples for each person\n", (float) round(apples/people));

    // to convert data types by putting (datatype) before the data

    float ex_one = 2.4536;
    float ex_two = 2.65;
    float ex_three = 0.009;

    printf("%.4f, %.2f, %.3f\n", ex_one, ex_two, ex_three);

    printf("f\n", sqrt(20)):

    return 0;
}