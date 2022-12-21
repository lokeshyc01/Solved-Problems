#include<stdio.h>
#include<stdlib.h>

int CheckLastOccurance(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iSize -1 ;iCnt >= 0 ; iCnt--)
    {
       if(Arr[iCnt] == iNo)
       {
           break;
       }
    }

    return iCnt;
}

int main()
{
    int *ptr = NULL;

    int iLength = 0, i = 0,iValue = 0;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout the last occurance \n");
    scanf("%d",&iValue);

    iRet = CheckLastOccurance(ptr, iLength,iValue);

    if(iRet == -1)
    {
        printf("%d is Not occured in the array \n",iValue);
    }
    else
    {
        printf("Number %d occured in the array at index position %d \n",iValue,iRet);
    }
    
    return 0;
}