//Accept N number from the user and return frequency of 11 from it
//input:        N: 6
//	        Elements: 85 11 3 80 11 88
//Output:	2

#include<stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnt=0,i=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt])==11)
		{
			i++;
		}
	}
	return i;	
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
	
	iRet=Frequency(p, iSize);
	printf("Result is:%d\n", iRet);
	
	free(p);
return 0;

}
