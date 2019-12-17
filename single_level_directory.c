#include<stdio.h>
struct
{
	char dname[20];
	char fname[20][20];
	int fcount;
}dir;
void main()
{
	int c,i;
	dir.fcount=0;
	printf("enter the directory name\n");
	scanf("%s",&dir.dname);
	
	do
	{
		printf("enter the name of the file\n");
		scanf("%s",&dir.fname[dir.fcount]);
		dir.fcount++;		
		printf("do you want to continue!!1:1/0\n");
		scanf("%d",&c);
	}while(c==1);
	
	printf("directory name is:%s\n",dir.dname);
	printf("file names are:\n");
	for(i=0;i<dir.fcount;i++)
	{
		printf("\t%s",dir.fname[i]);
	}
	
}


