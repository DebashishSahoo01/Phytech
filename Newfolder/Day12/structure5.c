#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp{
    int empno;
    int salary;
    char name[10];
};

int main(){
    struct emp emp1[5]={{10,500,"SDI"},{11,555,"BBSR"},{12,569,"YOO"},{13,876,"BUU"},{14,893,"NOO"}};
    for (int i=0;i<5;i++){
        printf("empname:%s empno:%d empsalary:%d \n",emp1[i].name,emp1[i].empno,emp1[i].salary);
    }
}