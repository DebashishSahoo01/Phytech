#include<stdio.h>

int main(){
    int a=6,b=8;
    int *pt1,*pt2;
    pt1=&a;
    pt2=&b;
    *pt1=a+b;
    printf("%d",*pt1);
}