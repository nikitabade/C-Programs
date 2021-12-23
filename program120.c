#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char Arr[10];
    fd=open("lb17.txt", O_RDWR);
    
    if(fd==-1)
    {
        printf("unable to open file\n");
    }
    
    // 0 from starting position
    // 1 from current position
    // 2 from end of the file
    

     
    lseek(fd,-5,2); //2 is end of the file therefore second parameter should be negative
     
    read(fd,Arr,5);
    write(1,Arr,5);
     
    printf("\n");
    
    close(fd);
    return 0;
    
}
