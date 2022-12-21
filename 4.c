#include<stdio.h>

void pattern(int iNo)
{
    int i = 0;
    for(i = 1;i <= iNo; i++)
    {
       if(i == 1)
       {
            printf("#\t");
            printf("%d\t",i);
            printf("*\t");
            printf("#\t");
       }
       else if(i == iNo)
       {
            printf("%d\t",i);
            printf("*\t");
       }
       else
       {
            printf("%d\t",i);
            printf("*\t");
            printf("#\t");
       }

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

