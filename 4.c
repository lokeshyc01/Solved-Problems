#include<stdio.h>
void Table(int iNo)
{
    int iMult = 1;
    int iCnt = 1;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}