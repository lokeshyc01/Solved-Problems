#include<stdio.h>

int DollarToINR(int iNo)
{
   int iDollarValue = 70;
    int iValue = 0;

    iValue = iDollarValue * iNo;

    return iValue;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}