// power of an number

#include<stdio.h>
int main(){
    int p,n,res=0;
    scanf("%d",&n);
    scanf("%d",&p);
    res=n;
    while (p>=2)
    {
        res=res*n;
        p--;
    }
    printf("power is %d",res);
}
