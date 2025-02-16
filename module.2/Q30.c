#include<stdio.h>
int main()
{
    int N ,i;
    float sum=0 , average;
    printf("enter the number of element");
    scanf("%d",&N);

    int arr[N];
    printf ("enter %d number: \n",N);
    for (i=0;i<N;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    average = sum/N;
    printf ("sum of all element : %.2f\n",sum);
    printf("average of all element :%.2f\n",average);
    return 0;
}
