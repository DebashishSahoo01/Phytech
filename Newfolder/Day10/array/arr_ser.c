#include<stdio.h>

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int b,flag=0;
    scanf("%d",&b);
    for (int i=0;i<8;i++){
        if (arr[i]==b){
            printf("serch:%d\n",i);
            flag=1;
            break;
        }
    }
    if (flag==0){
        printf("sorry we unable to find the value");
    }
    
    for (int i=0;i<8;i++){
        printf("value:%d\n",arr[i]);
    }
}