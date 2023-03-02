#include<stdio.h>

int main(){
    struct alpha{
        char first;
        struct alpha a;
    }al;
    al.first='a';
    printf("%c",al.first);
}