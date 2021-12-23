// Accept number from user and return Reverse number
//Input : 4563
//Outout : 3654

#include<stdio.h>

int Reverse(int);

int main()

{
	int iValue=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	iRet=Reverse(iValue);
	printf("Reverse number is:%d\n",iRet);
	
	return 0;
}
int Reverse(int iNo)
{
	int iDigit=0;
	int iRev=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}
