#include <stdio.h>
int main()
{
	int i, j, k, n, m, flag=0;
	printf("Enter the number of processes: \n");
	scanf("%d", &n);
	printf("Enter the number of resources: \n");
	scanf("%d", &m);

	int alloc[100][100], request[100][100], avail[100], work[100], finish[n];

	printf("Enter the allocation matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&alloc[i][j]);
		}
	}
	printf("Enter the request matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d", &request[i][j]);
		}
	}
	printf("Enter the available vector\n");
	for(i=0;i<m;i++)
	{
		scanf("%d", &avail[i]);
	}
	
	for(i=0;i<n;i++)
	{
		finish[i]=0;
	}
	for(i=0;i<m;i++)
	{
		work[i]=avail[i];
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			flag=0;
			for(k=0;k<m;k++)
			{
				if(finish[i]==0 && request[i][k]>work[k])
				{
					flag=1;
				}
			}
		if(flag==0)
		{	
			for(k=0;k<m;k++)
			{
				work[k]=work[k]+alloc[i][k];
			}
			finish[i]=1;
		}
		}
	}
	for(i=0;i<n;i++)
	{
		if(finish[i]==0)
		{
			printf("DEADLOCK DETECTED!!!");
			break;
		}
	}
	if(i==n)
	{
		printf("NOOOO DEADLOCK!!!!");
	}
	return 0;
}
		
	
	
					

