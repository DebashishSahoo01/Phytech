#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int new[5];
    for(int i=0;i<5;i++){
        new[i]=arr[5-1-i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",new[i]);
    }
    
}