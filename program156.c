//Accept string from the user and check how many vowels are present in the string

#include<stdio.h>

int CountVowels(char *Str)
{
  
	int iCnt=0;

	if(Str==NULL)
	{
		return -1;
	}

	while(*Str != '\0')
	{
		if((*Str=='a') || (*Str=='e') || (*Str=='i') || (*Str=='o') || (*Str=='u'))
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

	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet= CountVowels(Arr);

	printf("Numbers of vowels are: %d\n",iRet);

return 0;
}


