#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[8]={1,2,3,4,5,6,7,8};
    int sume=a[0],great=a[0],lower,val=a[0];
    for (int i=1;i<8;i++){
        if (a[i]>great){
            great=a[i];
        }
        if (a[i]>val){
            lower=val;
        }
        else{
            lower=a[i];
        }
        sume=sume+a[i];
    }
    printf("sum:%d\navg:%d\ngreatest:%d\nsmallest:%d\n",sume,sume/8,great,lower);
}