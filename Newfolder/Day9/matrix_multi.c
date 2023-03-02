#include<stdio.h>

int main(){
    int mat[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int mat1[3][3]={{2,2,2},
                    {2,2,2},
                    {2,2,2}};
    int k=0;
    while (k<3)
    {
        for (int j = 0; j <3; j++)
        {
            mat1[k][j]=mat1[k][j] * mat[k][j];
            printf("%d ",mat1[k][j]);
        }
        printf("\n");
        k++;
    }
}