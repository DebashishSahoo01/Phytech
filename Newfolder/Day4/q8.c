#include<stdio.h>

int main(){
    int a,j;
    scanf("%d",&a);
    for (int i=3;i>=0;i--){
        j=(a>>i) & 0x1;
        printf("%d",!j);
    }
    return 0;
}