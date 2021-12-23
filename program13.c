
#include<stdio.h>

int Addition(int iValue)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=1; iCnt<=iValue; iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}
int main()
{
	int iNo=0; 
	int iRet=0;
	
	printf("enter the number\t");
	scanf("%d",&iNo);
	
	iRet= Addition(iNo);
	
	printf("Addition is:%d",iRet);
	
	return 0;
}

