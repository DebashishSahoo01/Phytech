#include<stdio.h>

int main(){
    int a=10;
    char b='c';
    float c=10.2;
    void *p;
    p=&a;
    void *p1;
    p1=&b;
    void *p2;
    p2=&c;
    printf("%d",*(int *)p);
    printf("%c",*(char *)p1);
    printf("%f",*(float *)p2);
}