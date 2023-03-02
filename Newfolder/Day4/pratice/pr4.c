#include<stdio.h>

int main(){
    int a,b,j;
    scanf("%d",&a);
    b=1<<5;
    a=a ^ (1 | b);
    for(int i=7; i>=0;i--){
        j=(a>>i) & 0x1;
        printf("%d",j);
    }
}