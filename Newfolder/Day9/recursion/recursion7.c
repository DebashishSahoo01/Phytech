#include<stdio.h>

int val(int a){
    if (a<1){
        return;
    }
    else{
        static int x=5;
        static int d;
        d=a;
        int y=6;
        d++;
        x++;
        y++;
        printf("%d",x);
        printf("%d",y);
        val(a-1);
        printf("%d",d);
    }
}
int main(){
    val(5);

}