#include <stdio.h>

void main(){
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Grade A -Excellent!");
    }
    else if(marks >= 75){
        printf("Grade B - Very Good");
    }
    else if(marks >= 50){
         printf("Grade C -  Good");
    }
    else if(marks >=0){
         printf("Grade D - Pass");
    }
    else{
        printf("Invalid marks");
    }
    
}