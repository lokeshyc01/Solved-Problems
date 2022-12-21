#include<stdio.h>
int CountTwo(int iNo)
{
    int iDigit = 0,iFrequency = 0;;
    int iValue = 4;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit ==2)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Frequency of 2 is %d",iRet);
    return 0;
}