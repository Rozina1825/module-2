#include <stdio.h>
int factorial( int n);
int main()
{
    int num;
    printf ("enter a number: ");
    scanf ("%d",&num);
    int result = factorial (num);
    printf ("factorial of %d is %d\n",num,result);
    return  0;
}
        int factorial(int n)
    {
        if (n==0)
        {
            return 1;
        } else
     {
        return n *factorial(n-1);
      }
}

