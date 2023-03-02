#include<stdio.h>

int (*func)(int,int);
int add(int,int);
int sub(int,int);
int multi(int,int);
int divi(int,int);
int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int multi(int x,int y){
    return x*y;
}
int divi(int x,int y){
    return x/y;
}

int main(){
    int a,b,res;
    char d;
    scanf("%c",&d);
    scanf("%d%d",&a,&b);
    if (d=='+'){
        func=&add;
        res=(*func)(a,b);
    }
    else if(d=='-'){
        func=&sub;
        res=(*func)(a,b);
    }else if(d=='*'){
        func=&multi;
        res=(*func)(a,b);
    }
    else{
        func=&divi;
        res=(*func)(a,b);
    }
    printf("%d",res);

}