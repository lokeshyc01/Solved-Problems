#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CountEven(int Arr[],int iLength)
{


    int iCnt = 0,iNo = 11;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
      
    }

    if(iCnt == iLength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }

    
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

    if(iRet == 1)
    {
        printf("It contains 11");
    }
    else
    {
        printf("It does not contain 11");
    }

    free(p);

    return 0;
}