//Accepy number from the user and display below pattern
//input : 6
//output :6 # 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>

void pattern(int iNo)
{
	int iCnt=0;


	for(iCnt=iNo; iCnt > 0; iCnt--)
	{
		printf("%d\t",iCnt);
		printf("#\t");
	}
}

int main()
{
	int iValue=0;

	printf("enter the number\n");
	scanf("%d",&iValue);
	pattern(iValue);
	
	return 0;
}
