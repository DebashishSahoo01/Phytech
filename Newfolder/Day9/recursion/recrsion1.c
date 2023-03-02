#include<stdio.h>

int dis(int a){
    if (a==0){
        return 1;
    }
    printf("%d\n",a);
    dis(a-1);
    printf("%d\n",a);
}

int main(){
    dis(3);
    return 0;
}