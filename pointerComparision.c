#include<stdio.h>

void main(){
    int numbers[] = {10,20,30,40};

    int *p = numbers;

    while(p < numbers+4){
        printf("%d\n", *p);
        p++;
    }
}