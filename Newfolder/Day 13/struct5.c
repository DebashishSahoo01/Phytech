#include<stdio.h>

int main(){
    struct emplo{
        int emid[5];
        int salary;
        int *s;
    }emp;
    printf("%d %d",sizeof(emplo),sizeof(emp.emid));
    return 0;
}