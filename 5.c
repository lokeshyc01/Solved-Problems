#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenMult = 1;
    int iOddMult = 1;
    int iFactDiff = 0;
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2 ) == 0)
       {
            iEvenMult = iEvenMult * iCnt;
       }
       else
       {
            iOddMult = iOddMult * iCnt;
       }
    }
    
        iFactDiff = iEvenMult - iOddMult;

    return iFactDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d",iRet);

    return 0;
}