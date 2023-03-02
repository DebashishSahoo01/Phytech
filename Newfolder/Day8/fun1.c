#include<stdio.h>
int even1(){
    int a=10;
    if (a%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}

int main(){
    char* a;
    even1();
}
