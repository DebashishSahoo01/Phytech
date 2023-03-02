#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp{
    int empno;
    int salary;
    char name[10];
};

int main(){
    struct emp *ptr, emp1[2];
    ptr=&emp1;
    for (int i=0;i<2;i++){
        scanf("%s %d %d \n",(ptr+i)->name,&(ptr+i)->empno,&(ptr+i)->salary);

    }
    for (int i=0;i<2;i++){
        printf("empname:%s empno:%d empsalary:%d \n",(ptr+i)->name,&(ptr+i)->empno,&(ptr+i)->salary);
    }
}