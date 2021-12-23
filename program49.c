//Accept n number from the user and perform the Average of that bumbers.....

#include<stdio.h>
#include<stdlib.h>

float Average (int Arr[],int iSize)
{
	int iCnt=0, iSum=0;
	float fResult=0.0f;
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	
	}
	fResult= iSum/iSize;
	return fResult;
}
int main()
{
	int *ptr= NULL;
	int iCnt=0, iLength=0;
	float fRet =0.0f;
	
	printf("Enter the number of elements\n");
	scanf("%d", &iLength);
	
	ptr= (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter the numbers\n");
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	fRet = Average(ptr,iLength);
	
	printf("Average is :%f\n",fRet);
	free (ptr);
	return 0;
	
}