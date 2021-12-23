#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0, iRet=0;
	char frame[30];
	char Data[]="Marvellous Ifosystems";
	
	printf("Enter file name");
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
	
	iRet=write(fd,Data,10);
	
	printf("%d bytes gets successfully written in the file",iRet);
	return 0;
}