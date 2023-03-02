// check prime no or not
#include<stdio.h>

int main(){
    int n,count=0,l;
    scanf("%d",&n);
    l=n/2;
    int flag=0;
    for (int i = 2; i <=l; i++)
    {
        if (n%i==0)
        {
            printf("%d is not an prime no",n);
            flag=1;
            break;
        }
        
    }
    if (flag==0){
        printf("%d is a prime no",n);
    }

}
