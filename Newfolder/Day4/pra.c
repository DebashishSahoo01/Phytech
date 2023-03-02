#include<stdio.h>

int main(){
    int a,j,f,c,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for (int i=7;i>=0;i--){
        j=(a>>i) & 0x1;
        f=(b>>i) & 0x1;
        c=j || f;
        printf("%d",c);
    }
    return 0;
}
