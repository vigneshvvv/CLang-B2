#include<stdio.h>

void findMax(int numbers[], int size){
    int max = numbers[0];

    for(int i=0; i< size; i++){
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("%d\n", max);
}

void main(){

    int nums[] = {10,20,30,40,50};
    int size = sizeof(nums)/ sizeof(nums[0]);
    findMax(nums, size);

}