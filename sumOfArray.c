#include<stdio.h>

void arraySum(int numbers[], int size){
    int sum = 0;

    for(int i=0; i < size; i++){
        sum = sum + numbers[i];
    }

    printf("%d\n", sum);
}

void main(){

    int nums[] = {10,20,30,40,50};
    int size = sizeof(nums)/ sizeof(nums[0]);

    arraySum(nums, size);


}