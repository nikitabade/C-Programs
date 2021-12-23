//Accept N number from the user and display such elements which is divisible by 5
//input:         N:          6
//               Elements:  85 66 3 55 93 88
//Output:	 66 55 88
#include<stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{

	int iCnt=0;
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
	
		if(((Arr[iCnt])%11)==0) 
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}


int main()
{
	int iSize=0, iCnt=0;
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
	
	Display(p, iSize);
	
	free(p);
return 0;

}
