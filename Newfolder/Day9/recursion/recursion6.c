#include<stdio.h>

int display(){
    static int x=5;
    int y=6;
    x++;
    y++;
    printf("%d\n",x);
    printf("%d\n",y);
}
int main(){
    for (int i = 0; i < 3; i++)
    {
        display();
    }
    return 0;
    
}