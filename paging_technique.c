#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,noofpages,memsize=0,pagesize,page[10],frameno,offset,logadd,phyadd;
	printf("enter the memory size:\n");
	scanf("%d",&memsize);
	printf("enter the page size:\n");
	scanf("%d",&pagesize);

	noofpages=memsize/pagesize;

	for(i=0;i<noofpages;i++)
	{
		printf("enter the frame of page[%d]\n",i);
		scanf("%d",&page[i]);
	}

	int choice;
	do
	{
		printf("1.cal physical address\n2.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the logical address\n");
				scanf("%d",&logadd);
				frameno=logadd/pagesize;
				offset=logadd%pagesize;
				phyadd=(page[frameno]*pagesize)+offset;
				printf("phyadd is %d\n",phyadd);
				break;
			case 2:
				exit(0);
				break;
		}
	}while(choice!=2);
}
