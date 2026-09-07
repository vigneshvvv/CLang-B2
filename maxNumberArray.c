#include <stdio.h>

void main(){
    int numbers[5] = {101,201,105,305,108};

    int max = numbers[0];

    for(int i =0; i < 5; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }

    printf("%d\n", max);
}