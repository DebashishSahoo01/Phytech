#include<stdio.h>

int main(){
    int arr[5]={1,3,2,4,5};
    int temp;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if (arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;   
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
}