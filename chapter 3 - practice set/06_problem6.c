/*
Write a program to find greatest of four numbers entered by the user
*/

#include <stdio.h>

int main()
{
 
    int num1, num2, num3, num4;

    printf("Enter four different number to get greatest number\n");

    printf("Enter first Number\n");
    scanf("%d", &num1);

    printf("Enter second Number\n");
    scanf("%d", &num2);

    printf("Enter third Number\n");
    scanf("%d", &num3);

    printf("Enter fourth Number\n");
    scanf("%d", &num4);

    if (num1 >= num2 && num1 >= num3 && num1 >= num4)
        printf("Greatest number is: %d\n", num1);
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4)
        printf("Greatest number is: %d\n", num2);
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4)
        printf("Greatest number is: %d\n", num3);
    else
        printf("Greatest number is: %d\n", num4);

    return 0;
}