#include<stdio.h>
// int fac(){
//     int n,res=0,j,fac=1;
//     scanf("%d",&n);
//     for (int i=1 ;i<=n;i++){
//         j=i;
//         while(j>0){
//             fac=fac*j;
//             j--;
//         }
//         res=res+(fac/i);
//     }
//     printf("%d",res);
// }
int fac(int a){
    int c;
    if (a==0){
        return 0;
    }
    c=fac(a)*fac(a-1);
    printf("%d",c);
}
int main(){
    fac(5);
}