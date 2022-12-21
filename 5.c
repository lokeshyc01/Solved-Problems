#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength,int iValue)
{

    int iCount = 0 , iCnt = 0 ;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
       if(Arr[iCnt] == iValue)
       {
            iCount++;
       }
      
    }
   return iCount;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0,No = 0;
    int *p = NULL;

    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("enter elements\n");

    for(iCnt = 0;iCnt < iSize ; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number you want to search");
    scanf("%d",&No);

     iRet = CountEven(p,iSize,No);

     printf("%d",iRet);

    free(p);

    return 0;
}