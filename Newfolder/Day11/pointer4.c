#include<stdio.h>

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int *p=&arr;
    for (int i=0;i<8;i++){
        printf("%d\n",*(p+i-2));
    }
}