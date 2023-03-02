#include<stdio.h>

int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    int *ptr;
    ptr=arr;
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+n-i-1));
    }
}