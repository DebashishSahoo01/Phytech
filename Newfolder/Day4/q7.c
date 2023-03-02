#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a;
    d=b;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("before:%d %d after swaping:%d %d",c,d,a,b);
}