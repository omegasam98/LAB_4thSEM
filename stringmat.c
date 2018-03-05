#include<stdio.h>
#include<string.h>
main()
{
	int pos=-1,j,i,n,m;
	char A[100],B[100];
	printf("\nEnter the main string: ");
	gets(A);
	n=strlen(A);
	printf("\nEnter the string to be found: ");
	gets(B);
	m=strlen(B);
	for(i=0;i<=n-m;i++)
	{
		j=0;
		while(j<m && A[i+j]==B[j])
		{
			j=j+1;
		}
		if(j==m)
		{	
			pos=i;
			break;
		}	
	}
	if(pos!=-1)
		printf("\nSearch Successful and found at %d",i+1);
	else
		printf("\nUnsuccessful Search");
}		
