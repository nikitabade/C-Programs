
#include<stdio.h>

int Display(int);

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);	
	
	iRet=Display(iValue);
	printf("Multiplication of digit is:%d\n",iRet);
	
	return 0;
}

int Display(int iNo)
{
	
	int iDigit=0;
	int iMulti=1;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iMulti= iMulti*iDigit;
		iNo=iNo/10;
	}
	return iMulti;
}

