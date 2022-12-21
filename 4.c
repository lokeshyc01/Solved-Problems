#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iCnt = 0;
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (end[iCnt] != *start)
    {
        if(end[iCnt] == ch)
        {
            break;
        }
        iCnt--;
    }
    
    if(end[iCnt] == '\0')
    {
        return -1;
    }
    else
    {
        return -(iCnt-1);
    }
    
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Character\n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Last occurance is at the position : %d",iRet);

    return 0;
}