#include<stdio.h>

int main(){
    int a[]={3,2,5,0,31,45,7,67,9};
    int *q,*p=a;
    printf("%d %d %d \n",(*p)++,*p++,*++p);
    printf("%d\n",*p);
    q=p+3;
    printf("%d\n",*q);
}