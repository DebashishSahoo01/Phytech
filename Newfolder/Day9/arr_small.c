#include<stdio.h>

int main(){
    int a[7]={10,23,45,23,12,9,223};
    int mini,minimum=a[0];
    for(int i=1;i<7;i++){
        if (minimum > a[i]){
            minimum=a[i];
        }
    }
    printf("%d",minimum);
}