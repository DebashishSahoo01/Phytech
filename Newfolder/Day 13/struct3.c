#include<stdio.h>

struct leader{
    char *lead;
    int born;

};

int main(){
    struct leader l1={"hello",123};
    struct leader l2=l1;
    printf("%s %d",l2.lead,l1.born);
}