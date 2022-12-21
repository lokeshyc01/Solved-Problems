#include<stdio.h>
#include<stdlib.h>

void Difference(int Arr[],int iLength)
{

    int iEvenSum = 0 , iOddSum = 0 , iCnt = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0 && Arr[iCnt] % 5 == 0)
        {
            printf("%d",Arr[iCnt]);
        }
      
    }
   
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0,iLength = 0;
    int *p = NULL;

    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("enter elements\n");

    for(iCnt = 0;iCnt < iSize ; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

     Difference(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}