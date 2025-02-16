#include<stdio.h>
int fibonacci_iterative(int n){
int a=0, b=1,next,i;
if (n==0)
    return a;
    for (i=2;i<=n;i++){
        next = a+b;
        a=b;
        b=next;
    }
     return b;
}
int main()
{
    int N, i;
    printf ("enter the number of terms:");
    scanf("%d",&N);
    printf ("fibonacci sequence up to %d terms (iterative):\n",N);
    for (i=0;i<N;i++){
        printf ("%d",fibonacci_iterative(i));
    }
    printf ("\n");
    return 0;
}
