#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
void main(int argc,char *arg[])
{
	int pid;
	pid=fork();
	if(pid<0)
	{
		printf("fork failed");
		exit(0);
	}
	else if(pid==0)
	{

		execlp("Who am i","ls",NULL);
		exit(0);
	}
	else
	{
		printf("print process is->%d",getpid());
		wait(NULL);
		exit(0);
	}
}



