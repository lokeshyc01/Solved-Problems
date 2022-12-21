#include<stdio.h>
#include<stdbool.h>

bool Check(char *str,char ch)
{
    bool bFlag = false;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
        return bFlag;
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