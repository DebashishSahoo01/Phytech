#include<stdio.h>

struct headoff{
    char head[10];
    int hpin;
};

int main(){
    struct headoff h={"ch",1};
    printf("%s %d",h.head,h.hpin);
}
struct branch{
    char bran[10]="bang";
    int bpin=431;
};