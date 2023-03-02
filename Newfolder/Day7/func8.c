#include<stdio.h>

int area(int l,int b){
    int are;
    are=l*b;
    return are;
}

int perimeter(int l,int b){
    int peri;
    peri=2*(l+b);
    return peri;
}

int main()
{
    int l,b;
    int area1,peri;
    scanf("%d",&l);
    scanf("%d",&b);
    area1=area(l,b);
    peri=perimeter(l,b);
    printf("%d\n",area1);
    printf("%d\n",peri);
    return 0;
}