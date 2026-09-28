#include<stdio.h>


struct Employee{
    int id;
    union{
        float salary;
        float stipend;
    };
};


struct EmployeeNew{
    int id;
    union{
        float salary;
        float stipend;
    } income;
};
void main(){
    struct Employee e;
    e.id = 1;
    e.salary = 50000;
    printf("%.2f\n", e.salary);

    struct EmployeeNew emp;

    emp.id = 1;
    emp.income.stipend = 30000;

    printf("Stiphend = %.2f\n", emp.income.stipend);
}