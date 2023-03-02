#include<stdio.h>
int main(){
    int a;
    int b;
    char e;
    printf("please enter \n");
    scanf("%c",&e);
    scanf("%d",&a);
    scanf("%d",&b);
    printf("please enter \n");
    if (e=='+'){
        printf("value:%d",a+b);
    }
    else{
        printf("chage symbol");
    }
    return 0;
}