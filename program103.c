#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>
//#include<io.h>

int main()
{
	int fd=0;
	char frame[30];
	
	printf("Enter file name");
	scanf("%s", frame);
	
	fd= creat(frame,0777);
	
	if(fd==-1)
	{
		printf("unable to create the file");
	}
	else
	{
		printf("file succesfully created");
	}
	return 0;
}
