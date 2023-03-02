#include<stdio.h>

int main(){
    int a,b,j,c;
    scanf("%d",&a);
    b=1<<3;
    c=1<<7;
    a=a ^ (b ^ c);
    for(int i=7; i>=0;i--){
        j=(a>>i) & 0x1;
        printf("%d",j);
    }
}