// Accept number from user and check weather it is pallindrome or not
//Input : 121, 1221, 45654
//Outout : number is pallindrome

#include<stdio.h>
#include<stdbool.h>
bool CheckPallindrome(int);

int main()

{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet= CheckPallindrome(iValue);
	
	if(bRet==true)
	{
		printf("Number is pallindrome\n");
	}
	else
	{
		printf("Number is not pallindrome\n");
	}
	return 0;
}
bool CheckPallindrome(int iNo)
{
	int iDigit=0;
	int iRev=0;
	int iTemp=iNo;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	if(iRev==iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
