#include <stdio.h>

void main(){
    int sum = 0;

    for(int i =0; i <= 10; i++){
        // sum+= i;
        sum = sum+i;
    }

    printf("%d\n", sum);
}