#include<stdio.h>
struct
{
	char dname[20];
	char fname[20][20];
	int fcount;
}dir[20];

void main()
{
	int c,i,j,n;

	printf("enter the number of directory\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		dir[i].fcount=0;
		printf("enter the name of the directory\n");
		scanf("%s",&dir[i].dname);
		do{
			printf("enter the name of the file\n");
			scanf("%s",&dir[i].fname[dir[i].fcount]);
			dir[i].fcount++;
			printf("do you want ot continue:1/0\n");
			scanf("%d",&c);
		}while(c==1);
	}
	
		for(i=0;i<n;i++)
		{	
			printf("directory name:\n");	
			printf("%s\n",dir[i].dname);
			
			printf("file names are:\n");
			for(j=0;j<dir[i].fcount;j++)
			{
				printf("%s\t",dir[i].fname[j]);
			}
			printf("\n");	
		}
}
