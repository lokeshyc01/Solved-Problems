#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }   
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Enter a string\n");
//As array name is internally considered as base address of that array
    // scanf("%s",Arr);

    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("Number of characters are %d\n",iRet);

    return 0;
}