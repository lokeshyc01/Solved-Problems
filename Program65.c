#include<stdio.h>
#include<stdbool.h>

int MaxDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        if(iMax == 9)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);
    
    printf("Greatest Number from given number is : %d",iRet);
    return 0;
}
