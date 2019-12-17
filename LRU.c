#include<stdio.h>
void main()
{
int i,j,k,f,n,max,flag=0,P[100],F[100],hit=0,miss=0,rec[100];
printf("enter the number of frames:\n");
scanf("%d",&f);
printf("enter the number of pages:\n");
scanf("%d",&n);

printf("enter the pages:\n");
for(i=0;i<n;i++)
	{
	scanf("%d",&P[i]);
	F[i]=0;
	rec[i]=999;
	}


for(i=0;i<n;i++)
	{
	flag=0;
	for(j=0;j<f;j++)
		{
		if(F[j]==P[i])
			{
			rec[j]=0;
			flag=1;
			hit++;
			}
		else
			{
			rec[j]++;
			}
		}
	if(flag==0)
		{
		miss++;
		max=0;
		for(j=0;j<f;j++)
			{
			if(rec[j]>max)
				{
				k=j;
				max=rec[j];
				}
			}
		rec[k]=0;
		F[k]=P[i];
		}
	for(j=0;j<f;j++)
                {
		printf("%d  ",F[j]);
		}
	printf("\n");
	}
printf("MISS=%d,HIT=%d",miss,hit);
}

