#include<stdio.h>

int powe(int a, int b){
    int p=1;
    while (b>0)
    {
        p=p*a;
        b--;
    }
    printf("%d",p);
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    powe(a,b);
}
