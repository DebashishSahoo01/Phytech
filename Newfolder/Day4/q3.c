#include<stdio.h>

int main(){
    int a,j,b;
    int count=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=0; i<=7;i++){
        j=(a>>i) & 0x1;
        count++;
        if (count==b){
            if (j==0){
                j= j | 1;
                printf("%d",j);
                break;
            }
        }
    }
}