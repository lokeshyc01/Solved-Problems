#include<stdio.h>

void pattern(int iNo)
{
    int i = 0;
    for(i = 1;i <= iNo; i++)
    {
        printf("%d\t",i);
        printf("*\t");
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

