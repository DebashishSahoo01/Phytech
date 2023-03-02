#include<stdio.h>
int main(){
    int a[4]={1,2,3,4};
    int b[6]={5,6,7,8,9,10};
    int size1,size2,size;
    size1=sizeof(a)/sizeof(a[0]);
    size2=sizeof(b)/sizeof(b[0]);
    size=size1+size2;
    int merg[size];
    int i=0;
    while (i<size)
    {
        if (i<size1){
            merg[i]=a[i];
        }
        else{
            merg[i]=b[i];
        }
        i++;
    }
    for (int j=0;j<size;j++){
        printf("%d",merg[j]);
    }
}