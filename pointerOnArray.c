#include<stdio.h>

void main(){
    int numbers[] = {10,20,30,40,50};

    int *ptr = numbers;

    // printf("%d\n", *ptr);
    // printf("%d\n", *(ptr+1));
    //  printf("%d\n", *(ptr+2));
    //   printf("%d\n", *(ptr+3));

    for(int i=0; i<5; i++){
        // printf("%d\n", *(ptr + i));

        printf("%d\n", *ptr);
        ptr++;
    }
}