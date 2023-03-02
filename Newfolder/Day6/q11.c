//fibonacci sequnce

#include<stdio.h>
int main(){
    int a=0,b=1,c,count=2,i,l;
    scanf("%d",&l);
    printf("%d %d",a,b);
    while (count<=l)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
        count++;
    }
    
}