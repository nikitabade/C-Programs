//Accept N number from the user and Check weather that numbers contain 11 or not
//input:        N: 6
//	        Elements: 85 11 3 80 93 88 90
//Output:	11 is present

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check(int Arr[], int iLength)
{
	int iCnt=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt])==11)
		{
			return true;
		}
	}	
}


int main()
{
	int iSize=0, iCnt=0, iRet=0;
	int *p= NULL;

	printf("Enter the numbers of elements\n");
	scanf("%d",&iSize);

	p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate the memory");
		return -1;
	}
	printf("Enter elements\n");
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Check(p, iSize);\
	if(iRet==true)
	{
		printf("11 is present");
	}
	else
	{
		printf("11 is not present");
	}
	free(p);
return 0;

}
