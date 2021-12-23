//Accept n number from the user and perform the addition of that bumbers......(by using pointer)

#include<stdio.h>
#include<stdlib.h>

int Addition (int *Brr,int iSize)
{
	int iCnt=0, iSum=0;
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		iSum=iSum+(*Brr);
		Brr++;
	}
	return iSum;
}
int main()
{
	int *Arr= NULL;
	int iRet=0, iCnt=0, iLength=0;
	
	printf("Enter the number of elements\n");
	scanf("%d", &iLength);
	
	Arr= (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter the numbers\n");
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	iRet= Addition(Arr,iLength);
	
	printf("Addition is :%d\n",iRet);
	return 0;
	
}