#include<stdio.h>
int main()
{
	int i,j,bt[100],wt[100],tat[100],n;
	float avgtat=0,avgwt=0;

	printf("enter the number of process\n");
	scanf("%d",&n);

	printf("enter the burst time\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	wt[0]=0;

	for(i=1;i<n;i++)
	{
		wt[i]=0;
		for(j=0;j<i;j++)
		{
			wt[i]=wt[i]+bt[j];
		}
		tat[i]=bt[i]+wt[i];
		avgwt=avgwt+wt[i];
		avgtat=avgtat+tat[i];
	}
	printf("process|burst time|turn around time|waiting time|\n");
	for(i=0;i<n;i++)
	{
		printf("p[%d]|\t%d\t|%d\t|%d\t|\n",i,bt[i],tat[i],wt[i]);
	}
	printf("%f",(avgtat/n));
	printf("%f",(avgwt/n));
  	return 0;
}
