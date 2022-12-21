#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0,iCnt = 1;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if(iCnt > 9)
            {
                iCnt = 1;
            }
            printf("%d\t",iCnt);
            iCnt++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter Number of Rows and Columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}