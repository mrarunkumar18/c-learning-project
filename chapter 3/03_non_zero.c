#include <stdio.h>

int main()
{
 
    if (1)
    {
        printf("This if is executed!\n");

    }
    
if (2345)
{
    printf("This if is also executed!\n");  
}
if ('c')
{
    printf("This if is also executed!\n");      
}
if (0)
{
    printf("This if is not executed!\n");
}

    return 0;
}