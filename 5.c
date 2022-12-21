#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

 for(iCnt = 1; iCnt <= (iNo); iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
          iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int SumFact(int iNo)
{
    {
    int iCnt = 0;
    int iSum = 0;

 for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
          iSum = iSum + iCnt;
        }
    }
    return iSum;
}
}

int FactDiff(int iNo)
{
    int iSumOfFact = 0;
    int iSumOfNonFact = 0;

    iSumOfFact = SumFact(iNo);
    iSumOfNonFact = SumNonFact(iNo);

    int iDiff = iSumOfFact - iSumOfNonFact;

    return iDiff;
}

int main()
{

    int iValue = 0;
    int iRet = 0;
   printf("Enter Number\n");
   scanf("%d",&iValue);

   iRet = FactDiff(iValue);
   printf("%d",iRet);

    return 0;
}