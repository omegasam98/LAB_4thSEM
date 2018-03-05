#include<stdio.h>
main()
{
	int A[80],pos,key,i,n,mid,low,high;
	printf("\nEnter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements to be added to the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nEnter the key elemets to be found: ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	for(i=0;i<n;i++)
	{
		mid=(low+high)/2;
		if(A[mid]==key)
		{
			pos=mid;
			break;
		}
		else
		if(A[mid]<key)
                        high=mid-1;
		else	
			low=mid+1;
	}
	if(pos<n)
		printf("\nThe key element was found at %d",pos+1);
	else
		printf("\nUnsuccessful Search!");
}		
