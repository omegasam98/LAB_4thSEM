#include<stdio.h>
main()
{
	int i,j,n,A[10],min,temp;
	printf("\nEnter the number of elements to be added:");
	scanf("%d",&n);
	printf("\nEnter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
			{
				temp=A[j];
				A[j]=A[min];
				A[min]=temp;
			}
		}
	}
	printf("\nThe sorted array is: ");
	for(i=0;i<n;i++)
		printf("%d  ",A[i]);
}
