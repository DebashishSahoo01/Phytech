#include<stdio.h>

int bina(){
    int a=11,b;
    for (int i = 7; i>=0; i--)
    {
        b=(a>>i) & 0x1;
        printf("%d",b);
    }
    
}
int main(){
    bina();
}