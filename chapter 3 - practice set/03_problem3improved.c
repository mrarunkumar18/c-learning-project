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
 
    long int income;   // Use long int for large income value 
    double tax = 0;

    printf("Enter your income (in rupees) to calculate tex :");
    scanf("%ld", &income);      // Use %ld for long int 

    // slab 1 : income < 250000 (tax 0)
    if (income <= 250000)
    {
        tax = 0.0; 
    }
    // slab 2 : 250000 < income <= 500000 (tax 5%)
    else if (income <= 500000)
    {
        tax = 0.05 * (income - 250000); 
    }
    // slab 3 : 500000 < income <= 1000000 (tax 20 %)
    else if(income <= 1000000)
    {
        // this 500000 - 250000 = 250000 will be taxed at 5%

        tax = 0.20 * (income - 500000) + 0.05 * (500000 - 250000);
    }
    // slab 4 : income > 1000000 (tax 30 %)
    else
    {
        // this 1000000 - 500000 = 500000 will be taxed at 20%
        // this 500000 - 250000 = 250000 will be taxed at 5%

        tax = 0.30 * (income - 1000000) + 0.20 * (1000000 - 500000) + 0.05 * (500000 - 250000);
    }   


  printf ("\nAnnual income: %ld\n", income);
  printf ("Total tax to be paid: %.2f\n", tax);
  

    return 0;
}