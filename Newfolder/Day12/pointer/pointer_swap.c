#include<stdio.h>

int swap(int *a ,int *b ,int *c){
    int *temp1;
    temp1=c;
    c=b;
    b=a;
    a=temp1;
    return a,b,c;
}

int main(){
    int a=5,b=6,c=7;
    int *p1,*p2,*p3;
    printf("before swap:%d %d %d\n",a,b,c);
    swap(&a,&b,&c);
}