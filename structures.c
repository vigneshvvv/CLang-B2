#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void main(){
    struct Employee emp;

    struct Employee emp1;

    emp.id = 101;
    emp.salary = 50000;
   
    strcpy(emp.name, "Vignesh");

    printf("ID = %d\n", emp.id);
    printf("Salary = %.2f\n", emp.salary);
    printf("Name: %s\n", emp.name);

    emp1.id = 102;
    emp1.salary = 60000;

    printf("ID = %d\n", emp1.id);
    printf("Salary = %.2f\n", emp1.salary);

    struct Employee emp2 = {103, "Sathish", 70000};
    printf("ID = %d\n", emp2.id);
    printf("Salary = %.2f\n", emp2.salary);
    printf("Name: %s\n", emp2.name);

    struct Employee emp3;

    printf("Enter EmployeeID: ");
    scanf("%d", &emp3.id);

    printf("Enter employee Name: ");
    scanf("%49s", emp3.name);

    printf("Enter salary: ");
    scanf("%f", &emp3.salary);

    printf("ID = %d\n", emp3.id);
    printf("Salary = %.2f\n", emp3.salary);
    printf("Name: %s\n", emp3.name);
    
}
