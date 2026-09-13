#include<stdio.h>

void display(int numbers[], int size){
    for(int i =0; i < size; i++){
        printf("%d\n", numbers[i]);
    }
}

void main(){

    int nums[] = {10,20,30,40,50};
      int nums1[] = {60,70,80,90,100,101};
    display(nums1, 6);

}