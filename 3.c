#include<stdio.h>

void Display()
{
    int i = 0;
    int iCnt = 5;
    for(iCnt = 5; iCnt > i ; iCnt--)
    {
        printf("%d",iCnt);
    }
}

int main()
{
    Display();

    return 0;
}