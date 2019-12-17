#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main(int argc,char *arg[])
{
	int pid;
	pid=fork();
	if(pid<0)
	{
		printf("fork() failed");
		exit(1);
	}
	if(pid==0)
	{
		printf("child process is under execution\n");
		printf("child id child process is %d\n",getpid());
	}
	else
	{
		printf("parent process is under execution\n");
		printf("parent id of parent process is %d\n",getppid());
		printf("process id of child process is %d\n",getpid());
		printf("process id of parent is %d\n",getpid());
		exit(0);
	}
}



