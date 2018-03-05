#include<stdio.h>
#include<time.h>
main()
{
	int A[80],pos,key,i,n;
	clock_t start,end;
	printf("\nEnter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements to be added to the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nEnter the key elemets to be found: ");
	scanf("%d",&key);
	A[n]=key;
	start=clock();
	for(i=0;i<n;i++)
	{
		if(A[i]==key)
		{
			pos=i;
			break;
		}
	}
	end=clock();
	if(pos<n)
		printf("\nThe key element was found at %d",pos+1);
	else
		printf("\nUnsuccessful Search!");
	printf("\nTime taken=%lf",(double)end-start);
}		
