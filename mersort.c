#include<stdio.h>
mergesort(int a[], int low, int high)
{
	if(low<high)
	{
		int mid;
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}	
}

merge(int a[], int low, int mid, int high)
{
	int b[50],i,j,k;
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++];
	}
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=high)
		b[k++]=a[j++];
	for(i=low;i<=high;i++)
		a[i]=b[i];
}

main()
{
	int i,j,n,A[100],min,temp;
	printf("\nEnter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	mergesort(A,0,n-1);
	printf("\nThe sorted array is: ");
	for(i=0;i<n;i++)
		printf("%d  ",A[i]);
}
