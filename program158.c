//Accept string and one character from the user and check how many times that characterare in  the string...

#include<stdio.h>

int CountFrequency(char *Str, char ch)
{
  
	int iCnt=0;

	if(Str==NULL)
	{
		return -1;
	}

	while(*Str != '\0')
	{
		if(*Str==ch)
		{
			iCnt++;
		}
	Str++;
	}
	
	return iCnt;
}


int main()
{
	char Arr[30];
	int iRet=0;
	char cValue='\0';

	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the character\n");
	scanf(" %c",&cValue);
	
	iRet= CountFrequency(Arr,cValue);

	printf("Frequency is: %d\n",iRet);

return 0;
}


