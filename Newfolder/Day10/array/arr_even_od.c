#include<stdio.h>

int main(){
    int arr[10];
    int i=0,evens=0,odds=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if (arr[i]%2==0){
            evens=evens+arr[i];
        }
        else{
            odds=odds+arr[i];
        }
    }
    printf("even:%d odd:%d",evens,odds);
}