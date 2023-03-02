#include<stdio.h>

int main(){
    int a[6]={1,3,4,5,6,5};
    int count=1;
    int i=0;
    int j;
    while (i<6){
        j=i+1;
        while (j<6){
            if (a[i]==a[j]){
                count++;
            }
            j++;
        }
        printf("num is :%d , counted times:%d\n",a[i],count);
        count=1;
        i++;
    }

}