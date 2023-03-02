#include<stdio.h>
int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if (arr[i]%2!=0){
            printf("%d\n",arr[i]);
        }
    }
}