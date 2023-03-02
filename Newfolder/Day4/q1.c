#include<stdio.h>

int main(){
    int a,j;
    int sume=0;
    scanf("%d",&a);
    for (int i=7;i>=0;i--){
        j=(a>>i);
        sume=sume*10+(j&1);
    }
    printf("%d",sume);
    return 0;
}