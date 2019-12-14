#include<stdio.h>
#include<stdlib.h>
void main()
{
        int bt2[100],bt[100],wt[100],tat[100],count=0,i,j,n,tq,p=0;
        float avgtat=0,avgwt=0; 
        printf("enter the number of process:");
        scanf("%d",&n);
        printf("enter the burst time");
        for(i=0;i<n;i++)
        {
                scanf("%d",&bt[i]);
		bt2[i]=bt[i];
        }
	printf("enter the time quantum");
	scanf("%d",&tq);

	while(count!=n)
	{
		for(j=0;j<n;j++)
		{
			if(bt[j]<=tq && bt[j]!=0)
			{
				tat[j]=p+bt[j];
				p=tat[j];
				wt[j]=tat[j]-bt[j];
				bt[j]=0;
				count++;
			}
			else if(bt[j]>tq)
			{
				bt[j]=bt[j]-tq;
				p=p+tq;
			}
		}
	}
	
	printf("----------SOLUTION----------\n");
        printf("Process\tBurst time\tTotal time\tWaiting time\t\n");
        for(i=0;i<n;i++)
        {
                printf("P[%d]  \t %d  \t  %d   \t  %d\n",i,bt2[i],tat[i],wt[i]);
                avgtat=avgtat+tat[i];
                avgwt=avgwt+wt[i];
        }
                printf("avgtat=%f\n",avgtat/n);
                printf("avgwt=%f\n",avgwt/n);
}



