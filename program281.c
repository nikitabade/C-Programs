//Accept number from user and off 7th bit of that number if it is on. return the modified number.

#include<stdio.h>
typedef unsigned int UNIT;

UNIT OffBit(UNIT iNo)
{
    int iMask= 0x00000040, iResult=0;
    
    iResult= iNo ^ iMask;
    
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