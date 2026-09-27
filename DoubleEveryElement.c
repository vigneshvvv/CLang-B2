#include<stdio.h>

void doubleValues(int numbers[], int size){
    for(int i=0; i< size; i++){
        numbers[i] = numbers[i]*2;
    }
}

void doubleValuesPoint(int *numbers, int size){
    for(int i=0; i< size; i++){
       *(numbers+i) = *(numbers+i)*2;
    }
}

void main(){
    int numbers[] = {10,20,30,40};

    // doubleValues(numbers, 4);
    doubleValuesPoint(numbers, 4);

    for(int i=0; i< 4; i++){
        printf("%d\n", numbers[i]);
    }
}