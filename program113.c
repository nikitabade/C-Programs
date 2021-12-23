//Accept string from the user and accept one character. Check weather that character is present in string or not
#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str, char ch)
{
    printf("Charactery6ijtyktdk present");
     if(str==NULL)
     {
         return -1;
     }
     
    while(*str!='/0')
    {
        if(*str==ch);
        {
          return true;
        }
         
         str++;
    }
}

int main()
{
    char Arr[20];
    char cValue='/0';
    bool bRet= false;
    
    printf("enter the string\n");
    scanf("%[^'\n']s",Arr);
    
    printf("enter the character\n");
    scanf(" %c",&cValue);
      
    bRet= CheckChar(Arr, cValue);
    
    if(bRet==true)
    {
        printf("Character present");
    }
    else
    {
        printf("Character is not present");
    }
    
    return 0;
}