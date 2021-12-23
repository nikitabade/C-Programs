//accept file from user and open the file and return the file size using lseek.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0, iSize=0;
    char fname[20];
  
    
    printf("Enter the file name\n");
    scanf("%s",fname);
    
    fd=open(fname,O_RDWR);
    
    iSize= lseek(fd,0,2);
    
    printf("File size is: %d\n", iSize);
    
    close(fd);
    return 0;
}