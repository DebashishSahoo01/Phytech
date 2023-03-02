#include<stdio.h>

int main(){
    int arr1[4]={1,2,3,4};
    int arr2[4]={2,3,5,6};
    for (int i=0;i<4;i++){
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i]==arr2[j]){
                printf("%d",arr2[j]);
            }
        }
        
    }

}