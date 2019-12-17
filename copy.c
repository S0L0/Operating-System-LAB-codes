#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

void main()
{
char *txt = (char *)calloc(100, sizeof(char));

int f1,f2;

f1=open("file3.txt",O_RDONLY);
f2=open("file5.txt",O_WRONLY);

read(f1,txt,5);
write(f2,txt,9);
printf("Complete");
}

