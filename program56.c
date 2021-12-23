//Accept n number from the user and return  the difference between maximun and minimum number

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
	int iCnt=0;
	int i=0, iDiff=0;
	int iMin=Arr[0];
	int iMax=Arr[0];
	
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		if(Arr[iCnt]>iMax) 
		{
			iMin=Arr[iCnt];
		}
		if(Arr[iCnt]<iMin) 
		{
			iMin=Arr[iCnt];
		}
		iDiff= iMax-iMin;
	}
	return iDiff;
}
int main()
{
	
	int *ptr= NULL;
	int iCnt=0, iLength=0;
	int iRet =0;
	
	printf("Enter the number of elements\n");
	scanf("%d", &iLength);
	
	ptr= (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter the numbers\n");
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	iRet = Difference(ptr,iLength);
	
	printf("Difference between maximun and minimum number is :%d\n",iRet);
	free (ptr);
	return 0;
	
}