#include<stdio.h>

int intrest(){
    float p,i,t,s;
    for (i=0;i<3;i++){
        scanf("%f",&p);
        scanf("%f",&i);
        scanf("%f",&t);
        s=(p*i*t)/100;
        printf("%f",s);
    }
}

int main(){
    intrest();
    return 0;
}

