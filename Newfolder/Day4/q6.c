#include<stdio.h>

int main(){
    int a,j,c=0;
    scanf("%d",&a);
    for(int i=7;i>=0;i--){
        j=(a>>i) & 0x1;
        if (j==1){
            c++;
        }
    }
    printf("%d",c);
    return 0;
}