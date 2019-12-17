#include<stdio.h>

void main()
{
	int flag,i,j,f,k=0,n,frames[100],pages[100],hit=0,miss=0;
	printf("enter the number of frames:\n");
	scanf("%d",&f);//No,. of frames
	printf("enter the number of pages:\n");
	scanf("%d",&n);//Pages
	
	printf("enter the pages:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&pages[i]);
		frames[i]=0;
	}
	
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<f;j++)
		{
			if(pages[i]==frames[j])
			{
				flag=1;
				hit++;
			}
		}
		if(flag==0)
		{
			frames[k]=pages[i];
			miss++;
			k=(k+1)%f;
		}
	  	for(j=0;j<f;j++)
		{
			printf("%d   ",     frames[j]);
		}
		printf("\n");
	}
	printf("HIT=%d\nMISS(faluts)=%d\n",hit,miss);
}


