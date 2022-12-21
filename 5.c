#include<stdio.h>

void pattern(int iNo)
{
    int i = 0,iMult = 1;
    for(i = 1;i <= iNo; i++)
    {
       iMult = i * 2;
       printf("%d\t",iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}

