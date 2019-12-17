#include<stdio.h>
#include<stdlib.h>

int mutex=1,full=0,empty=3,x=0;

void producer();
void consumer();
int wait(int);
int signal(int);

int main()
{
	int n;
	do
	{
		printf("\n1.producer\n2.consumer\n3.exit\n");
		printf("\nenter ur choice");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
			if((mutex==1)&&(empty!=0))
			producer();
			else
			printf("buffer is full\n");
			break;
			case 2:
			if((mutex==1)&&(full!=0))
			consumer();
			else
			printf("buffer is empty");
			break;
			case 3:
			exit(0);
			break;
		}
	}while(n!=3);
return 0;
}

int wait(int s)
{
	return (--s);
}
int signal(int s)
{
	return (++s);
}
void producer()
{
	empty=wait(empty);
	mutex=wait(mutex);
	x++;
	printf("\nproducer produces the item %d",x);
	mutex=signal(mutex);
	full=signal(full);
}

void consumer()
{
	full=wait(full);
	mutex=wait(mutex);
	printf("\nconsumer consumes the item %d:",x);
	x--;
	mutex=signal(mutex);
	empty=signal(empty);
}
