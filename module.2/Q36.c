#include<stdio.h>
#include<string.h>
int palindrome(char str[]){
int length = strlen(str);
for(int i=0;i<length/2;i++){
 if(str[i] != str [length -1-i]){
        return 0;
      }
   }
return 1;
}
int main(){
char str[100];
printf ("enter the string :");
scanf("%s",str);
if (palindrome(str)){
    printf ("\%s\ is palindrome. \n",str);
}
else {
    printf ("\%s\ is not palindrome.\n",str);
}
return 0;
}
