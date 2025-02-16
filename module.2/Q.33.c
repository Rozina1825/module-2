#include<stdio.h>
int factorial_recursive(int n){
if (n==0)
    return 1;
    else
        return n*factorial_recursive(n-1);
}
int main()
{
    int num;
    printf ("enter a number");
    scanf("%d",&num);

    printf ("factorial of %d (recursive) :%d\n",num,factorial_recursive(num));
    return 0;
}
