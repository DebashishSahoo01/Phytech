#include<stdio.h>

int main(){
    int a[3][3];
    int i=0,sume=0;
    while(i<3){
        for (int j=0;j<3;j++){
            a[i][j]=(i+1)*2;
            if (i==j){
                sume=sume+a[i][j];
            }
        }
        i++;
    }
    printf("%d",sume);
}