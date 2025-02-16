#include<stdio.h>
int main()
{
    int metrix [3 ][3] ={
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };
    int sum=0,i,j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            sum += metrix[i][j];
        }
    }
    printf ("two dimensional (3x3) metrix =\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf ("%d",metrix[i][j]);
        }
        printf ("\n");
    }
    printf ("\n sum of all element : %d",sum);
}
