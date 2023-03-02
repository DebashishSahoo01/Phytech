#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Emp{
    int empno;
    float salary;
    char ename[9];
} employee;
// employee.empno=100;
// employee.salary=70000;
int main(){


    employee.empno=100;
    employee.salary=700.00;
    printf("%d %f",employee.empno,employee.salary);
    (strcpy(employee.ename,"SDI"));
    printf("%s",employee.ename);
    // struct Emp employee;
}