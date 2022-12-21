#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Minimum(int Arr[],int iLength)
{


    int iCnt = 0,iNo = 11,iMin = Arr[0],iMax = 0;

    for(iCnt = 1; iCnt < iLength ; iCnt++)
    {
        if(iMin > Arr[iCnt] )
        {
            iMin = Arr[iCnt];
        }
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
      
    }

    return iMax - iMin;
}
int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
    int *p = NULL;

    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("enter elements\n");

    for(iCnt = 0;iCnt < iSize ; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    
     iRet = Minimum(p,iSize);

    printf("Difference is %d",iRet);

    free(p);

    return 0;
}