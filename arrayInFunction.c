#include<stdio.h>


void display(int numbers[], int size){

    for(int i=0; i< size; i++){
        printf("%d\n", numbers[i]);
    }

    numbers[0] = 100;

}

void main(){

    int numbers[] = {10,20,30,40,50};
    display(numbers, 5);
    printf("%d\n" ,numbers[0]);
}