//Accept file name from the user and display all contents.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fdsrc=0,fdtest=0, iRet=0;
	char fname1[30],fname2[30];
	char Buffer[1024];    //mug from ex
	
	printf("Enter source file name\n");
	scanf("%s", fname1);
	
	fdsrc= open(fname1,O_RDONLY);
	
	if(fdsrc==-1)
	{
		printf("unable to open the file");
		return -1; // return to OS
	}
	else
	{
		printf("file succesfully opened with FD: %d\n",fdsrc);
	
	}
	
	printf("Enter destination file name\n");
	scanf("%s",fname2);
	
	fdtest=creat(fname2,0777);
	
	printf("Data from file is\n");
	
	while((iRet= read(fdsrc,Buffer,sizeof(Buffer)))!=0)
    {
        write(fdtest,Buffer,iRet);
    }
    
	close(fdsrc);
	close(fdtest);
	
	return 0;
}
