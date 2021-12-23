//Accept string from the user and return difference between frequency of small characters and capital characters
#include<stdio.h>

int Difference(char*str)
{
    int iCntCap=0, iCntSml=0, iDiff=0;
    if(str==NULL)
    {
        return 0;
    }
    
    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            iCntSml++;
        }
        else if((*str>='A') && (*str<='Z'))
        {
            iCntCap++;
        }
      str++;
    }
    iDiff=iCntSml-iCntCap;
    return iDiff;
}

int main()
{
    char Arr[30];
    int iRet=0;
    
    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);
    
    iRet= Difference(Arr);
    
    printf("Differences is:%d",iRet);
    
    return 0;
}