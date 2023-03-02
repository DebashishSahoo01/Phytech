#include<stdio.h>

int main(){
    int a;
    int rem;
    int rev=0;
    int i=0;
    scanf("%d",&a);
    while (i<3){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
        i++;
    }
    printf("the rev is:%d",rev);
    return 0;
}