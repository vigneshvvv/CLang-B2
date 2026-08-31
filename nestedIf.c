#include <stdio.h>

void main(){
    int age = 17;
    int hasLicense = 0;

    if(age >= 18){
        if(hasLicense == 1){
            printf("can Drive");
        }else{
            printf("You dont have licence");
        }
    }
    else{
        printf("Your age should be greater than 18");
    }
}