#include<stdio.h>

void main(){
    int arr[] = {10,20,30,40,50};

    int *p1 = &arr[1];
    int *p2 = &arr[4];

    printf("%ld\n", p2-p1);

    
}