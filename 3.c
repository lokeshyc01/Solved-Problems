#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCount++;
    }

    if(iCount >= 3 && iCount <= 7)
    {   
         return iCount;
    }
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}