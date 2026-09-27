#include<stdio.h>

struct Employee{
    int id;
    char name[50];
    float salary;

    // cgpa = (int)(cgpa*100)/100.0;
};

void main(){
    struct Employee emp = {101, "Sathish", 40000};
    struct Employee *ptr = &emp;

    printf("ID = %d\n", ptr -> id);
    printf("Name = %s\n", ptr-> name);
    printf("Salary = %.2f\n", (*ptr).salary);
}