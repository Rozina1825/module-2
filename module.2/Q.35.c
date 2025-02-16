#include<stdio.h>
int palindrome(int num){
int reversed =0,original =num,remainder;
while(num !=0){
    remainder = num%10;
    reversed =reversed *10 + remainder;
    num/=10;
}
   return original == reversed;
}
int main()
{
    int num;
    printf ("enter the number");
    scanf("%d",&num);
    if (palindrome(num)){
        printf ("%d is palindrome:\n",num);
    }
    else {
        printf ("%d is not a palindrome:\n",num);
    }
    return 0;
}
