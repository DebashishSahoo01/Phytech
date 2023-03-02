#include<stdio.h>
int main(){
    char* arr[]={"1","2","3","4","5","6","7","8","9","10","11","12","13"};
    int lati[]={0,3,8,9};
    int longi[]={4,7,10,13};
    int a,la,lo;
    a=sizeof(arr)/sizeof(arr[0]);
    la=sizeof(lati)/sizeof(lati[0]);
    lo=sizeof(longi)/sizeof(longi[0]);
    char n;
    printf("type 1:for latitude\n");
    printf("type 2 :for longitude\n");
    scanf("%c",&n);
    switch (n)
    {
    case '1':    
        for(int i=1;i<la;i+=2){
            for (int j=lati[i-1];j<lati[i];j++){
                printf("%s ",arr[j]);
            }
            printf("\n");
        }
        break;
    case '2':
        for(int i=1;i<lo;i+=2){
            for (int j=longi[i-1];j<longi[i];j++){
                printf("%s ",arr[j]);
            }
            printf("\n");
        }
        break;

    default:
        printf("please choose the coorect option again");
        break;
    }
    return 0;
}