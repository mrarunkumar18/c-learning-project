#include <stdio.h>

int main()
{
 
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age>60){
        printf("You are a senior citizen, you cannot drive.\n");
    }
    else if (age>18){
        printf("You are an adult, you can drive.\n");
    }
    else if (age>13){
        printf("You are a teenager, you cannot drive.\n");
    }
    else{
        printf("You are a child, you cannot drive.\n");
    }
    return 0;
}