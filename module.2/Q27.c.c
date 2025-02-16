#include<stdio.h>
int main()
{
	int size,a[100],i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	{
			printf("\nAscending ordered array = ");
			for(i=0;i<size;i++)
			{
				printf("%d ",a[i]);
			}

	}
	return 0;
}
