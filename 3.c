#include<stdio.h>
#define Meter 1000

int KMtoMeter(int iNo)
{
    int iDist = 0;

    iDist = Meter * iNo;
    return iDist;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("enter distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter : %d",iRet);
    return 0;
}