#include<stdio.h>


typedef union {
    char cardNumber[20];
    char upiId[50];
    float cashAmount;
} Payment;



void main(){

    Payment pay;
    int choice;

    printf("Select Payment method:\n");
    printf("1. Credit Card\n");
    printf("2. UPI\n");
    printf("3.Cash\n");

    printf("Enter a choice: \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a CardNumber: ");
        scanf("%19s", pay.cardNumber);
        printf("Card Number %s\n", pay.cardNumber);
        break;
    case 2:
        printf("Enter a UPI Id: ");
        scanf("%49s", pay.upiId);
        printf("UPI Number %s\n", pay.upiId);
        break;
    case 3:
        printf("Enter a CashAmount: ");
        scanf("%f", &pay.cashAmount);
        printf("cash amount %.2f\n", pay.cashAmount);
        break;
    
    default:
        printf("Invalid character");
        break;
    }

}