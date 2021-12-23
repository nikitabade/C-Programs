//Accept number of rows and column from the user and display below pattern
//input :   iRow=4    iCol=5
//output :    
 // 		1  2  3  4  5
 //		6  7  8  9  10
 // 		11 12 13 14 15
 // 		16 17 18 19 20

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;
    int iCnt=1;
    char ch='\0';
   for(i=iRow; i>=1; i--)
    { 
     	for(j=1; j<=iCol; j++)
	{
		{   
			printf("%d\t",iCnt); 
			iCnt++;
		 }
       } 	 
       printf("\n");	
   }
}
    
int main()
{
	int iValue1=0;
	int iValue2=0;

	printf("enter the number of rows\n");
	scanf("%d",&iValue1);
	
	printf("enter the number of column\n");
	scanf("%d",&iValue2);
	
	pattern(iValue1, iValue2);
	
	return 0;
}


