#include<stdio.h>

int RangeDisplay(int iStart , int iEnd)
{
    int iCnt = 0 , iSum = 0;;

    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
       iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeDisplay(iValue1,iValue2);
    
    printf("%d",iRet);
    
    return 0;
}