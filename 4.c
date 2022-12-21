#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    char ch1 = 'A', ch2 = 'a';
    for(i = iRow; i >= 1; i--)
    {
        for(j = 1 ; j <= iRow ; j++)
        {
            printf("%d\t",i);
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