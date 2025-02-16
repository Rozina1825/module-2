#include<stdio.h>
int prime(int num){
if (num<=1) return 0;
int i;
for (i=2;i<=num/2;i++){
    if (num%i==0) return 0;
}
return 1;
}
int main(){
int num;
printf ("enter a positive integer : ");
scanf ("%d",&num);

printf ("prime number between 1and %d are :\n",num);
for (int i=2;i<=num;++i){
    if (prime(i))printf ("%d",i);
}
printf ("\n");
return 0;

}
