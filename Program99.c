//4
//1 * 2 * 3 * 4 *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);       //Variable Data
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}