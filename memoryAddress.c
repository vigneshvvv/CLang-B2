#include<stdio.h>

void main(){
    int number = 10;

    int *ptr = &number;

    *ptr = 50;

    printf("value = %d\n", number);
    printf("Address = %p\n", (void *)&number);
    printf("ptr = %p\n", ptr);
    printf("*ptr Value = %d\n", *ptr);
}

