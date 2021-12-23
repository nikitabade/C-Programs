#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char frame[30];
	
	printf("Enter file name"); //Enther file name which we have created
	scanf("%s", frame);
	
	fd= open(frame,O_RDWR);
	
	if(fd==-1)
	{
		printf("unable to open the file");
	}
	else
	{
		printf("file succesfully opened with FD: %d\n",fd);
	}
	return 0;
}
