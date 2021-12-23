// accept number from the user and check weather that number is perfect or not
//perfect = sum of factors is equal to that number(in this case the that original number shouls not be the factor of same number)
//program using three functions

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int);
int SumFactor(int);

int main()
{
	int iValue=0;
	bool bRet= false;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	bRet= CheckPerfect(iValue);
	if(bRet==true)
	{
		printf("Number is perfect\n");
	}
	else
	{
		printf("Number is not perfect\n");
	}
	
	return 0;
}

bool CheckPerfect(int iNumber)
{
	int iRet=0;
	iRet=SumFactor(iNumber);
	if(iRet==iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int SumFactor(int iNo)
{
	int iSum=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1; iCnt<=(iNo/2); iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}