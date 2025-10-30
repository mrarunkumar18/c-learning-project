/*Calculate income tax paid by an employee to the government as per the slabs mentioned below:
IncomeSlab  Tax 
2.5 –5.0L    5%
5.0L-10.0L   20%
Above 10.0L    30%

Note that there is no tax below 2.5L. Take income amount as an input from the user
*/

#include <stdio.h>

int main()
{
 
    int slab;
    printf("Enter the income to calculate tax: ");
    scanf("%d", &slab);

    if (slab<250000)
    {
       printf("No tax applicable.\n");
    }
    else if (slab>=250000 && slab<=500000)
    {
        printf("Your tax is 5%% of your income: %.2f\n", slab*0.05);
    }
    else if (slab>500000 && slab<=1000000)
    {
        printf("Your tax is 20%% of your income: %.2f\n", slab*0.20);
    }
    else
    {
        printf("Your tax is 30%% of your income: %.2f\n", slab*0.30);
    }

    return 0;
}