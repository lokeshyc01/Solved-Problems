#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    char ch1 = 'A', ch2 = 'a';
    for(i = 1; i<= iRow; i++)
    {
        for(j = 0 ; j < iRow ; j++)
        {
            if((i % 2 == 0))
            {
                printf("%c\t",ch2+j);
            }
            else
            {
                 printf("%c\t",ch1+j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and Columns \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}