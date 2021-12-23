//Accept N number from the user and Accept one another number as NO and creturn index of first occurance

//input:        N:7
//		 NO: 6
//	        Elements:  11 6 80 6 30 88 45
//Output:	2

#include<stdio.h>
#include <stdlib.h>


int Check(int Arr[],int iNo, int iLength)
{
	int iCnt=0,i=0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt])==iNo)
		{
			return iCnt;
		}
	}
	return -1;	
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
	if(iRet==-1)
	{
		printf("There is no such number");
	}
	else
	{
		printf("first occurance of Number is at:%d\n",iRet+1);
	}
	
	free(p);
return 0;

}
