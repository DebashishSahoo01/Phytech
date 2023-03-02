#include<stdio.h>
#include<math.h>

int powe(int a,int b){
    return pow(a,b);
}

int main(){
    int a,b,p;
    scanf("%d",&a);
    scanf("%d",&b);
    p=powe(a,b);
    printf("%d\n",p);
}