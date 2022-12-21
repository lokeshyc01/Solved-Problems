#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    
    int iCnt = 0;
    int iMult = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       if((iCnt % 2 ) != 0)
       {
            iMult = iMult * iCnt;
       }
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("%d",iRet);

    return 0;
}