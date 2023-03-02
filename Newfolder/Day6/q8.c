// # sum of 20 natural number
#include<stdio.h>

int main(){
    int i=0,sume=0,a;
    scanf("%d",&a);
    while (i<=a)
    {
        sume=sume+i;
        i++;
    }
    printf("%d\n",sume);
    
}