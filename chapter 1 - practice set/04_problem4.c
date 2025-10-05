#include <stdio.h>

int main() {

    int principal = 30000; // Example principal amount
    float rate = 3.0; 
    int time = 1;
    float simple_interest = (principal * rate * time ) / 100;
    printf("The simple interest for principal %d, rate %f, and time  %d, is %f\n", principal, rate, time ,simple_interest);


    return 0;

}