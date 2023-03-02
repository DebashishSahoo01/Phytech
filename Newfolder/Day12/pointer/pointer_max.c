#include<stdio.h>

int main(){
    int a=5,b=6;
    int *ptr=&a,*ptr1=&b;
    if (*ptr>*ptr1){
        printf("maximum is:%d",*ptr);
    }
    else{
        printf("maximum is:%d",*ptr1);
    }
}
