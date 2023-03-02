#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp{
    int empno;
    int salary;
    char name[10];
};

int main(){
    struct emp emp1={10,500,"SDI"};
    // (strcpy(emp1.name,"SDI"));
    // emp1.salary=50000;
    // emp1.empno=100;
    printf("%d %d %s",emp1.salary,emp1.empno,emp1.name);
}