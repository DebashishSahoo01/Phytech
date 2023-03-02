#include<stdio.h>

int main(){
    int arr[7]={4,5,1,3,2,6,7},temp;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d",arr[i]);
    }
    
}