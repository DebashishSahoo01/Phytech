#include<stdio.h>

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}


int prod(int a,int b){
    return a*b;
}


int divi(int a ,int b){
    return a/b;
}

int main(){
    int a=40,b=30;
    int val;
    val=add(a,b);
    printf("%d",val);
    val=sub(a,b);
    printf("%d",val);
    val=prod(a,b);
    printf("%d",val);
    val=divi(a,b);
    printf("%d",val);
}
