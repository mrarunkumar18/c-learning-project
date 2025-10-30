/*Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user
*/
#include <stdio.h>

int main()
{
 
    int year;

    printf("Enter year to know whether this is a leap year or not : \n");
    scanf("%d", &year);

    if (year %4==0 && year %100 !=0 || year %400==0)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }



    return 0;
}