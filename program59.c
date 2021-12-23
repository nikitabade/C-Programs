//Accept n number from the user and and give another number and check that number is present in that n numbers....(using another logic in previous program)

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Checkno(int Arr[],int iSize, int iNo)
{
	int iCnt=0;
	bool bRet= false;
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		if(Arr[iCnt]==iNo) 
		{
			break;
		}
	}
	if (iCnt==iSize)
	{
		return false;
	}
	else		{
		return true;
	}
	
}
int main()
{
	int *ptr= NULL;
	int iCnt=0, iLength=0;
	int iRet =0, iNo=0;
	
	printf("Enter the number of elements\n");
	scanf("%d", &iLength);
	
	ptr= (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter the numbers\n");
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
     printf("enter number which we have to search\n");
      scanf("%d",&iNo);
	  
	iRet = Checkno(ptr,iLength,iNo);
	
	if(iRet==true)
	{
		printf("number is prsent");
	}
	else
	{
		printf("number is not prsent");
	}
	free (ptr);
	return 0;
}