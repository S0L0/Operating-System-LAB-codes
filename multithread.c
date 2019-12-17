#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define NUM_THREADS    5

void *PrintHello(void *threadid)
{
	long tid;
	tid=(long)threadid;
	printf("hello world!it's me thread #%ld!\n", tid);
	pthread_exit(NULL);	
}
 
int main(int argc, char *argv[])
{
	pthread_t threads[NUM_THREADS];

	long t;
	for(t=0;t<NUM_THREADS;t++)
	{
	printf("in main creating thread %ld\n", t);
	pthread_create(&threads[t], NULL,PrintHello,(void *)t);
	}


	pthread_exit(NULL);
}
