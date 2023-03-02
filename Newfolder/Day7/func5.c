#include<stdio.h>

int add(){
    int a=10,b=20;
    printf("sum is :%d \n",a+b);
}

int sub(){
    int a=20,b=10;
    printf("sub is :%d\n",a-b);
}


int prod(){
    int a=10,b=10;
    printf("product is :%d\n",a*b);
}


int divi(){
    int a=20,b=10;
    printf("division is :%d\n",a/b);
}

int main(){
    
    add();
    sub();
    prod();
    divi();
}
