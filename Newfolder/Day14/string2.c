#include<stdio.h>

int main(){
    char s[]="good";
    int count=0,i=0;
    while (s[i]!='\0')
    {
        count++;
        i++;
    }
    
    printf("%d",count);
}