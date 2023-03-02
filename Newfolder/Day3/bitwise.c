#include<stdio.h>
int main()
{
    int b=5;
    int m=--b + ++b -b-- + --b;
    printf("%d",m);
    return 0;
}