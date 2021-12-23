//Accept N number from the user and Accept one another number as NO and check weather that numbwe is present or not
//input:        N:7
//		 NO: 6
//	        Elements:  11 6 80 6 30 88 45
//Output:	number is present

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Check(int Arr[],int iNo, int iLength)
{
	int iCnt=0,i=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt])==iNo)
		{
			return true;
		}
	}
		
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
	
	iRet=Check(p,iNO, iSize);
	if(iRet==true)
	{
		printf("Number is present");
	}
	else
	{
		printf("Number is not present");
	}
	
	free(p);
return 0;

}
