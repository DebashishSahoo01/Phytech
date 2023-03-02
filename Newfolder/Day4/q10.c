#include<stdio.h>

int main(){
    int a=11100000;
    int c=00000101;
    c=c<<5;
    a=a && c;
    printf("%d",a);
}