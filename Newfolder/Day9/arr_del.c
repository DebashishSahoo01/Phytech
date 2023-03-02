#include<stdio.h>

int main(){
    int a[5]={4,2,3,1,9};
    int pos;
    scanf("%d",&pos);
    for(int i=pos-1;i<4;i++){
        a[i]=a[i+1];
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d",a[i]);
    }
    

}