#include<stdio.h>
int main(){
    char s[10];
    char s1[10];
    gets(s);
    gets(s1);
    int i=0,flag=0;
    while(s[i]!='\0'){
        if (s[i]!=s1[i]){
            printf("string are not equal");
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("string are equal");
    }
}