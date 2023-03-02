#include<stdio.h>

int multi(int n){
    if (n==1){
        return 1;
    }
    return n*multi(n-1);

}

int main(){
    int a;
    a=multi(5);
    printf("%d",a);

}