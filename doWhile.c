#include<stdio.h>


// Exceute First
//     |
// Check condition
//     |
// If True -> again Execute

void main(){

    int choice;

    do{
        printf("\n====MUNU ===\n");
        printf("1. View Profile\n");
        printf("2. Setting\n");
        printf("3. LogOut .. \n");

        printf("Enter your choice: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Profile Opened\n");
            break;
        case 2:
            printf("Settings opened\n");
            break;
        case 3:
            printf("Logout complete\n");
            break;
        default:
            printf("Invalid Choice\n");
        }
    }while (choice !=3);
    
    

}