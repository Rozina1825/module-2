#include <stdio.h>
void modifyvalue (int *ptr){
*ptr=20;}
int main(){
int num=10;
int *ptr =&num;
printf ("\nprint original value of num=%d",num);
modifyvalue(ptr);
printf ("\nprint modified value of num=%d",num);
}
