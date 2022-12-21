#include<stdio.h>

int Difference(char *str)
{
    int iSmallCount = 0,iCaptialCount = 0,i = 0;

    while (*str != '\0')
    {
       if (str >= 'a' && str <= 'z')
       {
            iSmallCount++;    
       }
       else if(str >= 'A' && str <= 'Z')
       {
            iCaptialCount++;
       }
        str++;
    }
    return iSmallCount - iCaptialCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("%d\n",iRet);

    return 0;
}