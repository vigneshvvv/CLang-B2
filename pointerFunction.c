#include<stdio.h>

void change(int *number){
    *number = 50;
    
}

void main(){
    int number = 10;
    change(&number);
    printf("%d\n", number);
}

