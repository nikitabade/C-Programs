//Accept string and from the user and check weather that string is pallindrome or not..

#include<stdio.h>
#include<stdbool.h>

int  CheckPallindrome(char *Str)
{

	char *start=NULL;
	char *end=NULL;
	start= Str;
	end= Str;
	
	while(*Str != '\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		while(*start!= *end)
	    {
		    break;
	    }
	    start++;
	
	    end--;
	}
	if(start<end)
	{
	    return false;
	}
	else
	{
	    return true;
	}

}


int main()
{
	char Arr[30];
	bool bRet=false;

	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);

	bRet= CheckPallindrome(Arr);
	
	if(bRet==true)
	{
		printf("String is pallindrome");
	}
	else
	{
		printf("String is not pallindrome");
	}

return 0;
}


