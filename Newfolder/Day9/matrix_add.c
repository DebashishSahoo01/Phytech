#include<stdio.h>

int main(){
    int a[2][2];
    int i=0;
    int sume=0;
    while(i<2){
        for (int j=0;j<2;j++){
            a[i][j]=(i+1)*2;
        }
        i++;
    }
    int k=0;
    while(k<2){
        for (int j=0;j<2;j++){
            sume=sume+a[k][j];
        }
        k++;
    }
    printf("%d",sume);
}