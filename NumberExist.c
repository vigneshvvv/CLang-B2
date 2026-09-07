#include<stdio.h>

void main(){
    int numbers[7] = {10,20,30,40,50,60,70};
    int search;
    int found = 0;

    printf("Enter a number to search: ");
    scanf("%d", &search);

    for(int i =0; i < 7; i++){
        if(numbers[i] == search){
            found = 1;
            break;
        }
    }

    if(found == 1){
        printf("Number Found\n");
    }else{
        printf("Number not found\n");
    }
}