#include<stdio.h>

int main(){
    struct play{
        char name[10];
        int gell;
    };
    struct play g={"hell",100};
    struct play g1=g;
}