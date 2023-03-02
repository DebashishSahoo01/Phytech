#include<stdio.h>
float count(float *);

float count(float *a){
    ++*a;
}

float main(){
    float f=10.4;
    float *fp=&f;
    count(fp);
    count(fp);
    count(fp);
    printf("%f",*fp);
}