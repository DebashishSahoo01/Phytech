#include<stdio.h>

int main(){
    int a=10;
    int b=20;
    int *p=&a;
    int **p1=&p;
    a++;
    printf("%d\n",a);
    printf("%d\n",p);
    *p++;
    printf("%d\n",*p);
    printf("%d\n",**p1);
}