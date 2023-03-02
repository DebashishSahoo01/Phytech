#include<stdio.h>

struct leader{
    char *emp;
    int sal;

};

int main(){
    struct leader l1,l2;
    l1.emp="sridhar";
    l2=l1;
    printf("%s %s",l2.emp,l1.emp);
}