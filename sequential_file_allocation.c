#include<stdio.h>
#include<stdlib.h>

void main()
{
	int f[20],n,i,c,j,k,count,sb,len;
	for(i=0;i<n;i++)
	{
	f[i]=0;
	}
	
x:	
	count=0;
	printf("file allocated are!\n");
	printf("enter the starting block and length\n");
	scanf("%d%d",&sb,&len);

	for(k=sb;k<(sb+len);k++)
	{
		if(f[k]==0)
		{	
			count++;
		}
	}
	
	if(len==count)
	{
		for(j=sb;j<(sb+len);j++)
		{
			f[j]=1;
			printf("%d\t%d\n",j,f[j]);
		}
		printf("the file is allocated to disk\n ");
	}
	else
		printf("the file is not allocated \n");
	
	printf("do you want to enter more file:1/0");
	scanf("%d",&c);
	if(c==1)
		goto x;	
	else
		exit(0);
}
