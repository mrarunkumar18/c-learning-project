/*
Write a program to determine whether a character entered by the user is lowercase or not

*/




// i use ASCII values to check whether the character is lowercase or not.

#include <stdio.h>

int main()
{

    char ch = 'D';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97, 122

    if (ch >= 97 && ch <= 122)
    {
        printf("This character is lowercase\n");
    }
    else
    {
        printf("This character is no lowercase\n");
    }

    return 0;
}