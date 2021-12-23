//Accept number from user and ON its first four bit of that number, return the modified number.

#include<stdio.h>
typedef unsigned int UNIT;

UNIT OffBit(UNIT iNo)
{
    int iMask1= 0xFFFFFFFF, iMask2= 0x0000000F, iMask, iResult=0;
    
    iMask= iMask1 & iMask2;
    
    iResult= iNo | iMask;
    
    return iResult;
}

int main()
{
    UNIT iValue, iRet=0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    iRet=OffBit(iValue);
    
    printf("modified number is %d\n",iRet);
    return 0;
}