
#include<stdio.h>

int Display(int);

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);	
	
	iRet=Display(iValue);
	printf("Addition of digit is:%d\n",iRet);
	
	return 0;
}

int Display(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iCnt++;
		iNo=iNo/10;
	}
	return iCnt;
}

