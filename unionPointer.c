#include<stdio.h>

union Data{
    int number;
    float price;
};

void main(){

    union Data d;
    union Data *ptr = &d;
    ptr -> number = 100;
    printf("%d\n", ptr -> number);

}