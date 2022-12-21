#include <stdio.h>
#include<stdlib.h>

void Digitsum
(int Arr[], int iLength)
{
    int iCnt = 0,iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iNo = Arr[iCnt];
        int iSum = 0;
        while (iNo > 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d\n",iSum);
        
    }

}
int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter Number of elements\n");
    scanf("%d", &iSize);


    p = (int *)malloc(iSize * sizeof(int));

    printf("enter elements\n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    Digitsum(p, iSize);

    free(p);

    return 0;
}