#include<stdio.h>

int main(){
    int a[10];
    int sume=0,b;
    for (int i=0;i<10;i++){
        scanf("%d",&b);
        a[i]=b;
        sume=sume+a[i];
    }
    printf("%d",sume);
}