#include<stdio.h>
#include"cantene.h"
int main(){
    char n;
    int total;
    int p1,p2,p3,p4,p5;
    int a1,a2,a3,a4,a5;
    printf("hello welcome to sdi cantene\n");
    printf("please choose 1.Breakfast\n");
    printf("please choose 2.Lunch\n");
    printf("please choose 3.Dinner\n");
    scanf("%c",&n);
    admin(n,&p1,&p2,&p3,&p4,&p5);
    food(n,&a1,&a2,&a3,&a4,&a5);
    total=p1*a1+p2*a2+p3*a3+p4*a4+p5*a5;
    printf("total bill is:%d",total);
} 