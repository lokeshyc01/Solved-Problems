#include<stdio.h>
void PrintEven(int iNo)
{
    int iCnt = 0;
    int iSum = iNo * 2; 
    if(iNo <= 0)
    {
        return;
    }
    else
    {
        for(iCnt = 2; iCnt <= iSum; iCnt = iCnt+2)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}