#include <stdio.h>

void main(){

    int numbers[5] = {10,20,30,40,50};

    printf("%p\n", (void*) numbers);
    printf("%p\n", (void*) &numbers[0]);

    int *p = numbers;
    printf("%d\n", *p);
    // printf("%d\n", *(p+1));
    // printf("%d\n", *(p+2));
    // printf("%d\n", *(p+3));
    // printf("%d\n", *(p+4));

    // for(int i=0; i < 5; i++){
    //     printf("%d\n", numbers[i]);
    // }

    // for(int i=0; i < 5; i++){
    //     printf("%d\n", *(p+i));
    // }


    p++;

    printf("%d\n", *p);

    p++;

    printf("%d\n", *p);


}