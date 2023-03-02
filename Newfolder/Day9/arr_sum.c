#include<stdio.h>

int main(){
    int a[5]={5,2,8,3,1};
    int sume=0;
    for (int i=0;i<5;i++){
        sume=sume+a[i];
    }
    printf("%d",sume);
}