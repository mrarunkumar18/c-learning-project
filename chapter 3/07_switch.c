#include <stdio.h>

int main()
{
 
    int a;

    printf("Enter a: ");
    scanf("%d", &a);
    switch(a)

    {
        case 1:
            printf("You entered one.\n");
            break;
        case 2:
            printf("You entered two.\n");
            break;
        case 3:
            printf("You entered three.\n");
            break;
        case 4:
            printf("You entered four.\n");
            break;
        default:
            printf("You entered something else.\n");
    }

    return 0;
}