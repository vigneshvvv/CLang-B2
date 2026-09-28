#include<stdio.h>


union Data
{
    int number;
    float price;
    char grade;
};


void main(){

    union Data d;
    d.number = 100;
    d.price = 25.5;
    printf("Price: %.2f\n", d.price);

    printf("%d\n", d.number);
    printf("Union size= %zu bytes\n", sizeof(union Data));



}