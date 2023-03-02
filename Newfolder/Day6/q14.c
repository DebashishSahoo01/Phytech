// reverse an number

#include<stdio.h>

int main(){
    int n,rev=0,digit;
    scanf("%d",&n);
    printf("before reverse:%d\n",n);
    while (n>0){
        digit=n%10;
        n=n/10;
        rev=rev*10+digit;
    }
    printf("after reverse :%d \n",rev);
}