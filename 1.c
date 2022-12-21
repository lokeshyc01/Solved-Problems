#include<stdio.h>

void pattern(int iNO)
{
    char ch = 'A';
    int i = 0;
    for(i = 0;i < 5; i++)
    {
        printf("%c\t",ch+i);
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

