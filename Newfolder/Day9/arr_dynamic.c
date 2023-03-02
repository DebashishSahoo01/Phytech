#include<stdio.h>

int main(){
    int len,new;
    scanf("%d",&len);
    int a[len];
    int in;
    for (int i=0;i<len;i++){
        scanf("%d",&in);
        a[i]=in;
    }
    new=sizeof(a)/sizeof(a[0]);
    printf("new:%d \n",new);
    for (int i=0;i<len;i++){
        printf("%d",a[i]);
    }
}