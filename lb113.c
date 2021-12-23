//Accept number of rows and column from the user and display below pattern
//input :   iRow=4    iCol=4
//output :    
 // 		A A A A A
 //		B B B B B
 // 		C C C C C
 // 		D D D D D

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;
    char ch='\0';
    
    for(i=1, ch='A'; i<=iRow; i++,ch++)
    { 
     	for(j=1; j<=iCol; j++)
	{
	
		{   printf("%c\t",ch);  }

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
