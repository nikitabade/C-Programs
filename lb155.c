//Accept number of rows and column from the user and display below pattern
//input :   iRow=6  iCol=6
//output :    
 // 		1 2 3 4 5 6
 //		1 2       6 
 // 		1   3     6
 // 		1     4   6 
 // 		1       5 6
 //		1 2 3 4 5 6

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;
    

   for(i=1; i<=iRow; i++)
    { 
     	for(j=1; j<=iCol; j++)
	{ 
		if(i==1|| j==1 || i==iRow || j==iCol || i==j)
		{
			printf("%d\t",j); 	
		}
		else
		{
			printf(" \t");  
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


