#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (sizeof(a)%5==0){
        printf("%d is divisible",a);
    }
    else{
        printf("%d is not dividible",a);
    }

}