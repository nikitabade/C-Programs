//Accepy number from the user and display below pattern
//input : 6
//output :# 1 * # 2 * # 3 * # 4 * # 5 * # 6 *

#include<stdio.h>

void pattern(int iNo)
{
	int iCnt=0;


	for(iCnt=1; iCnt <= iNo; iCnt++)
	{
		printf("#\t");
		printf("%d\t",iCnt);
		printf("*\t");
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
