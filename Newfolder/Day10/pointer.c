#include<stdio.h>
#include<stdlib.h>
float add(int x,int y){
    return x+y;

}
int main(){
    int a=10;
    int b=30;
    int *p=&a,*fptr=&b;
    int c;
    c=add(*p,*fptr);
    printf("%d",c);
}