#include<stdio.h>

int main(){
    int flag=0;
    int n,i=2,j=2;
    scanf("%d",&n);
    int ar[n/2];
    int b,k=0;
    while(i<=n){
        b=i/2;
        while (j<b+1){
            if (i%j==0){
                flag=1;
                break;
            }
            j++;
        }
        if (flag==0){
            ar[k]=i;
            k++;
        }
        flag=0;
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("\t%d",ar[i]);
    }
    
}