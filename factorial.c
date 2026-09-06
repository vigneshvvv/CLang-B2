#include<stdio.h>

void main(){
    int number;
    int factorial = 1;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &number);

    for(int i =1; i <= number; i++){
        factorial = factorial *i;
    }

    printf("Factorial= %d", factorial);


}