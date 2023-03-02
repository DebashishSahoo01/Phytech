#include<stdio.h>

int main(){
    int a[2][2];
    int i=0;
    while(i<2){
        for (int j=0;j<2;j++){
            a[i][j]=(i+1)*2;
            printf("%d",a[i][j]);
        }
        printf("\n");
        i++;
    }

}