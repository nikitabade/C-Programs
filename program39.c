// accept two number from the user and Display 
//input: 6
//iCnt :  1  2  3  4  5  6 
//Output: a  b  c  d  e  f

#include<stdio.h>
	
void Display(iNo)
{
	int iCnt=0;
	char ch= 'a';
	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
			printf("%c\t",ch);
			ch++;
	}
}



int main()
{
	int iValue=0;
	printf("Enter the number");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}