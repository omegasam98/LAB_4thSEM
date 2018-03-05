#include<stdio.h>
int cost[10][10], parent[10], n, min, mincost=0,ne=1;
main()
{
	int i,j,u,b,v,a;
	printf("\nEnter the number of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the cost matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	while(ne<n)
	{	
		min=999;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		while(parent[u])
			u=parent[u];
		while(parent[v])
			v=parent[v];
		if(u!=v)
		{
			parent[v]=u;
			mincost=mincost+min;
			printf("\n%d edge(%d,%d)=%d",ne++,a,b,min);
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("\nThe min cost of the spanning tree = %d",mincost);
}
