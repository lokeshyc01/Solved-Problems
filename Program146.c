#include<stdio.h>
#include<stdbool.h>

bool Check(char *str,char ch)
{
    while (*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }

    if(*str == '\0')
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
    char Arr[20];
    char cValue = '\0';
    bool bRet = 0;
    
    printf("Please enter a string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the the character\n");
    scanf(" %c",&cValue);

    bRet = Check(Arr,cValue);

    if(bRet == true)
    {
        printf("%c is available in the string ",cValue);
    }
    else
    {
        printf("%c is not available in the string ",cValue);
    }

    return 0;
}