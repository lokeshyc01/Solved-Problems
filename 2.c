#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    for (int i = 1; i <= iNo; i++)
    {
       printf("%d\t",i);
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}