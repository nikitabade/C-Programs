
#include<stdio.h>
typedef unsigned long int INT;

int Factorial(int iValue)
{
	int iCnt=0;
	INT iFact=1;
	
	if (iValue<0)
	{
		iValue= -iValue;
	}
	for(iCnt=1; iCnt<=iValue; iCnt++)
	{
		iFact=iFact*iCnt;
	}
	return iFact;
}
int main()
{
	int iNo=0; 
	INT iRet=0;
	
	printf("enter the number\t");
	scanf("%d",&iNo);
	
	iRet= Factorial(iNo);
	
	printf("Factorial is:%d",iRet);
	
	return 0;
}

