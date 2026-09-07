#include <stdio.h>

void main(){
    int numbers[7] = {10,20,30,40,50,60,70};
    int search;

    printf("Enter a number to find Index: ");
    scanf("%d", &search);
    int found = 0;

    for(int i =0; i < 7; i++){
        if(numbers[i] == search){
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("Number doesn't exist in array\n");
    }

    printf("%zu\n", sizeof(numbers)/sizeof(numbers[0]));

    int numbersN[7] = {10,20,30};

    char names[5] = {'H','e', 'l', 'l', 'o'};
    char name[]= "Vignesh";


}