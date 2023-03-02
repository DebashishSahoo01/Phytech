// palindrom or not

#include<stdio.h>

int main(){
    int digit;
    long int n,rev=0; 
    long int val;
    scanf("%ld",&n);
    val=n;
    while (n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if (rev==val){
        printf("%ld is a palindrom number",val);
    }
    else{
        printf("%ld is not an palindrom no",val);
    }
    
}