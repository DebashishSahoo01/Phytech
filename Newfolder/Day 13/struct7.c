#include<stdio.h>
struct decl{
    int n;
}dl;
int main(){
    dl.n=100;
    printf("%d",dl.n);
}