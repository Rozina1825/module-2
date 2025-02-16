#include<stdio.h>
int fibonacci(int n){
if (n<=1)
    return n;
    else
        return (fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
    int N,i;
    printf("enter the number of element");
    scanf("%d",&N);
    printf("fibonacci sequence up to %d terms :\n ",N);
    for (i=0;i<N;i++){
        printf ("%d",fibonacci(i));
    }
    printf("\n");
    return 0;
}
