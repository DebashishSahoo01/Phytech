#include<stdio.h>

// int first(int a[],int n){
//     int largest;
//     largest=a[0];
//     for(int i=1;i<n;i++){
//         if (a[i]>largest){
//             largest=a[i];
//         }
//     }
//     return largest;
// }

// int main(){
//     int largest;
//     int a[8]={3,4,6,7,12,14,45,234};
//     int n;
//     n=sizeof(a)/sizeof(a[0]);
//     largest=first(a,n);
//     int res=0;
//     for (int i = 0; i < n; i++){
//         if (a[i]!=largest){
//             if (res==0){
//                 res=i;
//             }
//             else if (a[i]>a[res]){
//                 res=i;
//             }
//         }
//     }
//     printf("second largest: %d %d\n",res,a[res]);
    
// }

int large(){
    int arr[5]={12,324,43,11,32};
    int largest,sec;
    largest=0;
    sec=-1;
    for (int i=1;i<5;i++){
        if(arr[i]>arr[largest]){
            sec=largest;
            largest=i;
        }
        else if (sec==-1 || arr[i]>arr[sec]){
            sec=i;
        }
    }
    return sec;
}


int small(){
    int arr[5]={12,324,43,11,32};
    int smallest,sec;
    smallest=0;
    sec=-1;
    for (int i=1;i<5;i++){
        if(arr[i]<arr[smallest]){
            sec=smallest;
            smallest=i;
        }
        else if (sec==-1 || arr[i]<arr[sec]){
            sec=i;
        }
    }
    return sec;
}

int main(){
    int seclr,secsm;
    int arr[5]={12,324,43,11,32};
    seclr=large();
    secsm=small();
    printf("second largest:%d %d\nsecond smallest:%d %d",seclr,arr[seclr],secsm,arr[secsm]);
}






