#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Dept
{
    char dept[30];
};


struct emp{
    int empno;
    int salary;
    char name[10];
    struct Dept empdept;
};


int display(struct emp emp1[]){
    for (int i=0;i<2;i++){
        scanf("%s %d %d %s\n",emp1[i].name,&emp1[i].empno,&emp1[i].salary,emp1[i].empdept.dept);

    }
    for (int i=0;i<2;i++){
        printf("empname:%s empno:%d empsalary:%d employeedepartment:%s\n",emp1[i].name,emp1[i].empno,emp1[i].salary,emp1[i].empdept.dept);
    }

}
int main(){
    struct emp emp1[2];
    display(emp1);
}