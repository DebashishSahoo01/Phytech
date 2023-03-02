#include<stdio.h>

int sume(int a){
    int x;
    if (a==1){
        return 1;
    }
    x=a+sume(a-1);
    return x; 

}

int main(){
    int a;
    a=sume(5);
    printf("%d",a);
    return 0;
}