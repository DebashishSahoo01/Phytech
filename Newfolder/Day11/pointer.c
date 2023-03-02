#include<stdio.h>

int main(){
    int p='c';
    int *pr=&p;
    printf("%d",sizeof(pr));
}