#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp{
    int empno;
    int salary;
    char name[10];
};


int display(struct emp emp1[]){
    for (int i=0;i<5;i++){
        scanf("%s %d %d \n",emp1[i].name,&emp1[i].empno,&emp1[i].salary);

    }
    for (int i=0;i<5;i++){
        printf("empname:%s empno:%d empsalary:%d \n",emp1[i].name,emp1[i].empno,emp1[i].salary);
    }

}
int main(){
    struct emp emp1[5];
    display(emp1);
}