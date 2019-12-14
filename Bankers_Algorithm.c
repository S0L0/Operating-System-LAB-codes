#include<stdio.h>
void main() 
	{ 
	int i,j,k,r,p,alloc[100][100],max[100][100],avail[100],need[100][100],seq[100],fail=0,succ=0,flag; 
	printf("enter the number of process:\n");
	scanf("%d",&p);//resources
	printf("enter the number of resources:\n"); 	
	scanf("%d",&r);//process

	printf("enter the allocation matrix:\n"); 	
	for(i=0;i<p;i++)
	{ 	
		for(j=0;j<r;j++) 
		{ 
			scanf("%d",&alloc[i][j]);
		}
	}

	printf("enter the max matrix:\n");
	for(i=0;i<p;i++) 
	{	
		for(j=0;j<r;j++) 
		{ 
			scanf("%d",&max[i][j]);
		}
	}
	
	printf("enter the available matrix:\n");
	for(i=0;i<r;i++) 
	{ 
		scanf("%d",&avail[i]);
	}
	
	//calculating need matrix
	printf("-------NEED MATRIX------"); 
	for(i=0;i<p;i++) 
	{ 
		for(j=0;j<r;j++) 
		{ 
                	need[i][j]=max[i][j]-alloc[i][j];
			printf("%d ",need[i][j]);
		}
	printf("\n");
	}

	while(fail<p)
	{	
		for(i=0;i<p;i++)
		{
			flag=0;
			for(j=0;j<r;j++)
			{
				if(need[i][j]>avail[j])
				{
					flag=1;
				}	
			}
		if(flag==0)
		{
			for(j=0;j<p;j++)
			{
				avail[j]=avail[j]+alloc[i][j];
				need[i][j]=999;
			}
			seq[succ]=i;
			succ++;
			printf("process %d completed New Available= ",i);
			for(j=0;j<r;j++)
			{
				printf("%d",avail[j]);
			}
			printf("\n");
		}
		else
		{
			fail++;
		}
		}
	}

	if(succ==p)
	{
		printf("NO DEADLOCK SYSTEM IS SAFE!\n");
		for(j=0;j<p;j++)
		{
			printf("P%d ->",seq[j]);
		}
	}
	else 
	{
		printf("DEADLOCK!!!!");
	}
}		
					
