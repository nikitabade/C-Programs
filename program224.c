//Accept string from the user and count the small characters
#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char*str)
{
    
    if(str==NULL)
    {
        return 0;
    }
    
    while(*str!='\0')
    {
        if((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u'))
        {
           return true;
        }
        
      str++;
    }
   
}

int main()
{
    char Arr[30];
    bool bRet=false;
    
    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);
    
    bRet= CheckVowel(Arr);
    
    if(bRet==true)
    {
         printf("Vowels are present");
    }
    else
    {
          printf("Vowels are not present");
    }
    
    return 0;
}