//accept file from user and open the file and check how many capital letters are present in that file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0, iCnt=0, iRet=0,i=0;
    char fname[20];
    char Buffer[10];
    
    printf("Enter the file name\n");
    scanf("%s",fname);
    
    fd=open(fname,O_RDWR);
    
    if(fd==-1)
    {
        printf("unable to open the file");
        return -1;
    }
    
    while((iRet= read(fd,Buffer,10))!=0)
    {
        for(i=0; i<iRet; i++)
        {
            if((Buffer[i]>='A') && (Buffer[i]<='Z'))
            {
                iCnt++;
            }
        }
    }
    printf("Total number of capital letters are: %d\n", iCnt);
    
    close(fd);
    return 0;
}