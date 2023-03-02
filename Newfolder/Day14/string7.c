#include<stdio.h>
int main(){
    char s[]="#Welcome2@phyte222ch@#@#";
    int i=0,alp=0,digi=0,sc=0;
    while(s[i]!='\0'){
        if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            alp++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            digi++;
        }
        else{
            sc++;
        }
        i++;
    }
    printf("%d %d %d",alp,digi,sc);
}