#include <stdio.h>

int main() {

    int a = 5;
    int b = 3;
    int c = a + b;
    printf("the value of a is %d and the value of b is %d and the sum is %d", a, b, c);
    // Modulus operator is used to get the remainder after division
    printf("\nthe value of a is %d and the value of b is %d and the remainder is %d\n", a, b, a % b);

  // this does not work for exponentiation in c 
   // int d = a ^ b; // this is bitwise xor operator

    return 0;

} 
