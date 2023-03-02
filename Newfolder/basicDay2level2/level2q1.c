#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    a=(a+8)/3;
    a=a%5;
    a=a*5;
    printf(" after doing calculation : %d",a);
}