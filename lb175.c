//Accept N number from the user and Accept one another number as NO and return frequency of NO from it
//input:        N:7
//		 NO: 6
//	        Elements: 6 11 3 80 6 88 45
//Output:	2

#include<stdio.h>
#include <stdlib.h>

int Frequency(int Arr[],int iNo, int iLength)
{
	int iCnt=0,i=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt])==iNo)
		{
			i++;
		}
	}
	return i;	
}


int main()
{
	int iSize=0, iCnt=0, iRet=0, iNO=0;
	int *p= NULL;

	printf("Enter the numbers of elements\n");
	scanf("%d",&iSize);
	
	printf("Enter the numbers \n");
	scanf("%d",&iNO);


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
	
	
	iRet=Frequency(p,iNO, iSize);
	printf("Result is:%d\n", iRet);
	
	free(p);
return 0;

}
