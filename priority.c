#include<stdio.h>
int main()
{
        int pt2[100],pt[100],j,bt[100],wt[100],ptat=0,tot[100],i,n,min,p;
	float avgtot=0,avgwt=0;

        printf("enter the number of processes:");
        scanf("%d",&n);
        printf("enter the burst time:");
        for(i=0;i<n;i++)
        {
        scanf("%d",&bt[i]);
        }
	printf("enter the priority");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&pt[i]);	
	 pt2[i]=pt[i];
	}
        for(i=0;i<n;i++)
        {
                p=999;
                for(j=0;j<n;j++)
                {
                        if(p>pt[j])
                        {
                                min=j;
                                p=pt[j];
                        }
                }
        wt[min]=ptat;
        tot[min]=ptat+bt[min];
        ptat=tot[min];
        pt[min]=999;
	avgwt=avgwt+wt[min];
        avgtot=avgtot+tot[min];
	}
        printf("\t process|burst time |tot |wait |\n");
        for(i=0;i<n;i++)
        {
        printf("\n\tp[%d]|\t%d|\t%d|\t%d|\t%d|\n",i,bt[i],pt2[i],tot[i],wt[i]);
        }
	printf("avgwt=%f\n",avgwt/n);
        printf("avgtot=%f\n",avgtot/n);


        return 0;
}

