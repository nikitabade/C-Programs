//Accept file name from the user and display all contents.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0, iRet=0;
	char frame[30];
	char Buffer[1024];    //mug from ex
	
	printf("Enter file name\n");
	scanf("%s", frame);
	
	fd= open(frame,O_RDONLY);
	
	if(fd==-1)
	{
		printf("unable to open the file");
		return -1; // return to OS
	}
	else
	{
		printf("file succesfully opened with FD: %d\n",fd);
	
	}
	
	printf("Data from file is\n");
	
	while((iRet= read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        write(1,Buffer,iRet);
    }
    
	close(fd);
	
	return 0;
}