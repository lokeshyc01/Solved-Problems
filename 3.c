#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCnt = 0;
    while (str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
          break;
        }
       iCnt++;
    }

    if(str[iCnt] == '\0')
    {
        return -1;
    }
    else
    {
        return iCnt+1;
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

    iRet = CountChar(arr,cValue);

    printf("First occurance is at the position : %d",iRet);

    return 0;
}