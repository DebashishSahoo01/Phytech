//count no of digit

#include<stdio.h>

int main(){
    int b,count=0;
    scanf("%d",&b);
    while (b>0){
        b=b/10;
        count++;
    }
    printf("%d",count);
}