#include<stdio.h>
int factorial_iterative(int n){
int result =1,i;
for (i=0;i<=n;i++){
    result*=i;
}
result =result ;
}
int main()
{
    int num;
    printf ("enter a number =");
    scanf ("%d",&num);
    printf ("factorial of %d (iterative) : %d\n",num,factorial_iterative(num));
    return 0;
}
