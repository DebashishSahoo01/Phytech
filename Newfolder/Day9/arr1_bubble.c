#include<stdio.h>

int main(){
    int a[]={4,2,1,3};
    int sizee=sizeof(a)/sizeof(a[0]);
    int temp;
    for (int i=0;i<sizee;i++){
        for (int j=i+1;j<sizee;j++){
            if (a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int k=0;k<sizee;k++){
        printf("%d",a[k]);
    }

}