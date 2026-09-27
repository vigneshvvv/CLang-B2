#include<stdio.h>

int sumArray(int *numbers, int size){
    int sum = 0;

    for(int i=0; i< size; i++){
        sum += *(numbers+i);
    }

    return sum;
}

void main(){

    int numbers[] = {10,20,30,40,50};
    int result = sumArray(numbers, 5);
    printf("Sum = %d\n", result);

}