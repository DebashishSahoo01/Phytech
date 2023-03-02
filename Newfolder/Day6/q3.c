// roots of quadratic equation

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float ans1,ans2,d;
    scanf("%d%d%d",&a,&b,&c);
    d=sqrt(b*b - 4*a*c);
    if (d>0){
        ans1=(-b+d)/(2*a);
        ans2=(-b+d)/2*a;
        printf("%f i%f",ans1,ans2);
    }
    else if(d==0){
        ans1=(-b)/(2*a);
        printf("%f i%f",ans1,ans1);
    }
    else{
        ans1=(-b+d)/2*a;
        ans2=(-b-d)/2*a;
        printf("%f i %f",ans2,ans1);
    }


}