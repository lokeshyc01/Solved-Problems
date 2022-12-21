#include <stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iDigitCount = 0;
        int iNo = Arr[iCnt];
        while (iNo > 0)
        {
            iNo = iNo / 10;
            iDigitCount++;
        }
        if(iDigitCount == 3)
        {
            printf("%d\n",Arr[iCnt]);
        }
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

    Digits(p, iSize);

    free(p);

    return 0;
}