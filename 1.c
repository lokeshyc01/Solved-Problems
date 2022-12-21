#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0,i = 0;

    while (*str != '\0')
    {
       if (str[i] >= 'A' && str[i] <= 'Z')
       {
            iCnt++;    
       }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);
    printf("%d\n",iRet);

    return 0;
}