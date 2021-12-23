//Check weather 15th bit is ON or OFF
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo)
{
    int iMask= 0x00004000;
    int iResult;
    
    iResult=iNo&iMask;
    if(iResult==iMask)
    {
        return true;
    }
    
}

int main()
{
    UNIT iValue=0;
    bool bRet= false;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);
    
    bRet= ChkBit(iValue);
    
    if(bRet==true)
    {
       printf ("15th bit is ON");
    }
    else
    {
        printf("15th bit is OFF");
    }
    return 0;
}