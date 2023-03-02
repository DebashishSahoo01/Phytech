#include<stdio.h>

int func(int *arr){
    for (int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }

}

int main(){
    int arr[5]={1,2,3,4,5};
    func(arr);

}