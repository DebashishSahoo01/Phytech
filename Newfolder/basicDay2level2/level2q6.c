#include<stdio.h>

int main()
{
    int a;
    int sume=0;
    scanf("%d",&a);
    int i=0;
    while (i<3){
        sume=sume+(a)%10;
        a=a/10;
        i++;
    }
    printf("sum of all number is:%d",sume);
    return 0;
}