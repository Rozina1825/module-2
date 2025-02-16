#include<stdio.h>
int main()
{
    int n,range,i;
    printf ("enter an integers :");
    scanf ("%d",&n);
    printf ("enter the range :");
    scanf ("%d",&range);

    for (i=1;i<=range;i++){
        printf ("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
