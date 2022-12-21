#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{

    int iCount = 0 , iCnt = 0 ;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
       if(Arr[iCnt] == 11)
       {
            iCount++;
       }
      
    }
   return iCount;
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

     iRet = CountEven(p,iSize);

     printf("%d",iRet);

    free(p);

    return 0;
}