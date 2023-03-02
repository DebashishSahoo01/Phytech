#include<stdio.h>

int main(){
    int ln,a;
    scanf("%d",&ln);
    int arr[ln];
    for (int i=0;i<=ln;i++){
        scanf("%d",&a);
        arr[i]=a;
        printf("%d",arr[i]);
    }
    return 0;
}