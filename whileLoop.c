#include<stdio.h>

// while(condition){
//    // code
// }

void main(){

    int pin;
    int attempts = 0;

    while (attempts < 3)
    {
       printf("Enter a PIN: ");
       scanf("%d", &pin);

       if (pin == 999){
        printf("Login successful");
        break;
       }

       printf("Wrong Pin\n");
       attempts++;

    }
    if(attempts == 3){
        printf("Account Locked\n");
    }
    
}