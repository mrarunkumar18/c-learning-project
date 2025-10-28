#include <stdio.h>

int main()
{
 
    int a;
    printf("Enter your marks to see your grade:");
    scanf("%d", &a);
    if(100>=a && a>=91)
    {
        printf("Your grade is A.\n");
    }
    else if(90>=a && a>=81)
    {
        printf("Your grade is B.\n");
    }
    else if(80>=a && a>=71)
    {
        printf("Your grade is C.\n");
    }
    else if(70>=a && a>=61)
    {
        printf("Your grade is D.\n");
    }
    else if(60>=a && a>=51)
    {
        printf("Your grade is E.\n");
    }
    else if(50>=a && a>=0)
    {
        printf("Your grade is F.\n");
    }
    else
    {
        printf("Invalid marks entered.\n");
    }

    return 0;
}