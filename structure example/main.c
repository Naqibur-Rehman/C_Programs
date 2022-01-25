#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[30];
    char hireDate[15];
    float salary;
};

int main()
{
    struct employee emp = {"Naqeeb", "16/05/2020", 1000000};

    printf("Name = %s \nHireDate = %s \nSalary = $%.2f", emp.name, emp.hireDate, emp.salary);

    printf("\nEnter employee details : \n");
    printf("Name : ");
    scanf(" ");
    gets(emp.name);

    printf("Hire date : ");
    gets(emp.hireDate);

    printf("Salary : ");
    scanf("%f", & emp.salary);

    printf("Name = %s \nHireDate = %s \nsalary = $%.2f", emp.name, emp.hireDate, emp.salary);

    return 0;
}
