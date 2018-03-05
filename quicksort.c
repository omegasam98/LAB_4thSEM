#include<stdio.h>
int partition( int a[], int low, int high)
{
	int pivot, temp, i, j;
	pivot=a[low];
	i=low+1;
	j=high;
	while(i<=j)
	{
		while(a[i]<=pivot && i<=high)
			i++;
		while(a[j]>pivot && j>=low)
			j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[j];
	a[j]=a[low];
	a[low]=temp;
	return j;
}

void quicksort(int a[], int low, int high)
{
	int s;
	if(low<high)
	{
		s=partition(a,low,high);
		quicksort(a,low,s-1);
		quicksort(a,s+1,high);
	}
}

main()
{
        int a[100], n, i,j;
        printf("\nEnter the no. of elements:");
        scanf("%d",&n);
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("\nThe sorted elements are: ");
	for(j=0;j<n;j++)
		printf("  %d",a[j]);
}
