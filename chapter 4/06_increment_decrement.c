#include <stdio.h>

int main()
{

    int i = 5;
    printf("The value of i is %d\n", i); // prints 5

    i = i + 5; // 10
    printf("The value of i is %d\n", i); // prints 10
    
    // i++ increments i by 1 after its current value is used
    //++i increments i by 1 before its current value is used

    printf("The value of i is %d\n", i++); // first print 10, then increment to 11

    printf("The value of i is %d\n", i); // now i is 11

    i +=2; // i = i + 2, now i is 13
    printf("The value of i is %d\n", i); // prints 13

    return 0;
}