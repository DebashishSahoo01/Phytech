#include<stdio.h>
int add(int *,int *);
int sub(int *,int *);
int multi(int *,int *);
int divi(int *,int *);

int add(int *x,int *y){
    printf("add is :%d",*x+*y);

}

int sub(int *x,int *y){
    printf("sub is :%d",*y-*x);

}

int multi(int *x,int *y){
    printf("add is :%d",*x * *y);

}

int divi(int *x,int *y){
    printf("divi is:%d",*x/(*y));
}

int main(){
    int a=10,b=20;
    int *p=&a,*fp=&b;
    add(p,fp);
    sub(p,fp);
    multi(p,fp);
    divi(p,fp);

}