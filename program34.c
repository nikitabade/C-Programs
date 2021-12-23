// accept two number from the user and return power

#include<stdio.h>
	
int Power(int,int);

int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRet=0;
	
	printf("Enter the first number\n");
	scanf("%d",&iValue1);
	
	printf("Enter the second number\n");
	scanf("%d",&iValue2);
	
	iRet=Power(iValue1, iValue2);
	
	printf("Answer is:%d",iRet);
	return 0;
}

	
int Power(int iCoefficient,int iExponent)
{
	int iCnt=0;
	int iAns=1;
	
	if(iCoefficient<0)
	{
		iCoefficient=-iCoefficient;
	}
	if(iExponent<0)
	{
		iExponent=-iExponent;
	}
	for(iCnt=1;iCnt<=iExponent; iCnt++)
	{
		iAns=iAns*iCoefficient;
	}
	return iAns;
}