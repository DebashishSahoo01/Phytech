#include<stdio.h>
int fun2();

int fun1(int n){
    if (n==1){
        return 1;
    }
    return n*fun2(n-1);

}
int fun2(int n){
    if ( n==1)
    {
        return 1;
    }
    return n*fun1(n-1);
}

int main(){
    int a;
    a=fun1(5);
    printf("%d",a);
}