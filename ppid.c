#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
void main()
{
	int pid,childid,grandchildid,parentid;
	childid=fork();
	if(childid<0)
	{
		printf("fork failed!");
		exit(1);
	}
	if(childid!=0)
	{
		wait(NULL);
		printf("iam parent process\n");
		printf("process id of parent process is %d\n",getpid());
	}
	else 
	{
		grandchildid=fork();
		if(grandchildid<0)
		{
			printf("fork failed");
			exit(1);
		}
		if(grandchildid!=0)
		{
			wait(NULL);
			printf("i am child process\n");
			printf("my process id is %d\n",getpid());
			printf("my parent's process id is %d\n ",getppid());
		}	
		else
		{
			printf("i am grand child\n");
			printf("myy process id is %d\n",getpid());
			printf("my parents process id is %d\n",getppid());
		}

	}
}
