#include<stdio.h>

int half(int n){
    if (n<1){
        return;
    }
    else{
        return (1+half(n/2));
    }
}

int main(){
    int a;
    a=half(10);
    printf("%d",a);
}