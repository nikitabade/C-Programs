//Accept number of rows and column from the user and display below pattern
//input :   iRow=5    iCol=5
//output :    
 // 		1 2 3 4 5
 //		  2 3 4 5 
 // 		    3 4 5
 // 		      4 5
 //			5

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;
    

   for(i=1; i<=iRow; i++)
    { 
     	for(j=1; j<=iCol; j++)
	{ 
		if(i>j)
		{
			printf(" \t"); 	
		}
		else
		{
			printf("%d\t",j);  
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


