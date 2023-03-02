#include<stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,1,2,3,4,5};
    int i=0,sum1=0,sum2=0;
    while (i<10){
        if (i<5){
            sum1=sum1+arr[i];
        }
        else{
            sum2=sum2+arr[i];
        }
        i++;
    }
    if (sum1==sum2){
        printf("TRUE");
    }
    else{
        printf("FAlSE");
    }
}