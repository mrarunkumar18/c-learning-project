//  2. Write a program to determine whether a student has passed or failed. 
// To pass, a student requires a total of 40% and at least 33% in each subject.
//  Assume there are three subjects and take the marks as input from the user


#include <stdio.h>

int main()
{
 
    int marks1, marks2, marks3;
    printf("Enter your marks1 to see your result: ");
    scanf("%d", &marks1);
    printf("Enter your marks2 to see your result: ");
    scanf("%d", &marks2);  
    printf("Enter your marks3 to see your result: ");
    scanf("%d", &marks3);

    if (marks1<33 || marks2<33 || marks3<33)
    {
        printf("You are fail.\n");
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("You are fail due to total percentage less than 40.\n");
        printf("Your total percentage is %.2f%%\n", (marks1 + marks2 + marks3) / 3.0);
    }
    else
    {  
        printf("Congratulations! You are pass.\n");
        printf("Your total percentage is %.2f%%\n", (marks1 + marks2 + marks3) / 3.0);
    }   
}
   
