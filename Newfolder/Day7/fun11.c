#include<stdio.h>
#include<math.h>

int powe(int a, int b){
    float val=1;
    for(int i=1;i<=b;i++){
        val=val+(1/pow(a,i));
    }
    printf("%0.2f",val);
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    powe(a,b);
}
