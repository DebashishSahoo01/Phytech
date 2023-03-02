// multiplication table

#include<stdio.h>
int main(){
    int a,i=1,m;
    scanf("%d",&a);
    while (i<=10){
        m=a*i;
        printf("\n %d  %d is %d",a,i,m);
        i++;
    }
}