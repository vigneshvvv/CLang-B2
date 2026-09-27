#include<stdio.h>

struct Employee{
    int id;
    float salary;
};

void increaseSalary(struct Employee *emp){
    emp -> salary = emp -> salary + 5000;
}




void main(){
    struct Employee emp = {101, 50000};
    printf("Before increase in salary = %.2f\n", emp.salary);

    increaseSalary(&emp);
    printf("After increase in salary = %.2f\n", emp.salary);
    


}