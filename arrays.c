#include<stdio.h>

void main(){
    // int sample[10];
    int marks[5] = {10,20,30, 40,50};

    printf("%d\n", marks[0]);
    printf("%d\n", marks[1]);
    printf("%d\n", marks[2]);
    printf("%d\n", marks[3]);
    printf("%d\n", marks[4]);
    marks[1] = 15;
    printf("%d\n", marks[1]);
}