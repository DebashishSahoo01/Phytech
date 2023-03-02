#include<stdio.h>

int main(){
    int a[10],b,k=0,j;
    for (int i=0;i<5;i++){
        scanf("%d",&b);
        j=2;
        while (j<b/2){
            if (b%j==0){
                a[k]=b;
                k++;
                break;
            j++;
            }
        }
    }
    for (int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}