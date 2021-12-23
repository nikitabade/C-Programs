// accept number from the user and Display table

#include<stdio.h>
void DisplayTable(int);

int main()
{
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	DisplayTable(iValue);
	return 0;
	
}

void DisplayTable(int iNo)
{
	int iTable=0;
	int iCnt=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1; iCnt<=10; iCnt++)
	{
		iTable=iNo*iCnt;
		printf("%d\n",iTable);
	}
	
}