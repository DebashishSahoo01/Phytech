#include<stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a<50 && a<b){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}