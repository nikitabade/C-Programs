//Accept number of rows and column from the user and display below pattern
//input :   iRow=4    iCol=5
//output :    
 // 		4 4 4 4 4
 //		3 3 3 3 3
 // 		2 2 2 2 2
 // 		1 1 1 1 1

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;
    char ch='\0';
    
    for(i=iRow; i>0; i--)
    { 
     	for(j=1; j<=iCol; j++)
	{
	
		{   printf("%d\t",i);  }

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
