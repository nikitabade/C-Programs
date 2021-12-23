//Accept n number from the user and return the count of number which is greater than 10 and less than 20

#include<stdio.h>
#include<stdlib.h>

int Greaterthan(int Arr[],int iSize)
{
	int iCnt=0;
	int i=0;


	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		if((Arr[iCnt]>10) && (Arr[iCnt]<20))
		{
			i++;
		}
	}
	return i;
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
	iRet = Greaterthan(ptr,iLength);
	
	printf("count of numbers which are between 10-20 :%d\n",iRet);
	free (ptr);
	return 0;
	
}