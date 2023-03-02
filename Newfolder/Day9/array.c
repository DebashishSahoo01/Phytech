#include<stdio.h>

int main(){
    int a[4];
    int b;
    for (int i=0;i<=3;i++){
        scanf("%d",&b);
        a[i]=b;   
    }
    for (int i=0;i<=3;i++){
        printf("%d",a[i]);   
    }
}