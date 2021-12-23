#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0, iRet=0;
	char frame[30];
	char Data[7];
	
	printf("Enter file name\n");
	scanf("%s", frame);
	
	fd= open(frame,O_RDWR);
	
	if(fd==-1)
	{
		printf("unable to open the file");
		return -1; // return to OS
	}
	else
	{
		printf("file succesfully opened with FD: %d\n",fd);
	
	}
	
	iRet=read(fd,Data,7);
	
	printf("%d bytes gets successfully read from the file",iRet);
	printf("Data from the file is:%s\n",Data);
	
	
	return 0;
}