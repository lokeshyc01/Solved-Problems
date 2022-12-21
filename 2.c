#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            break;
        }

        iNo = iNo / 10;
    }

   
    if(iNo > 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = ChkZero(iValue);

    if(iRet == 1)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }
    return 0;
}