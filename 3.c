#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0,iCnt = 0;
    char ch = 'a';

    for(i = 1 ; i <= iRow ; i++)
    {
            iCnt = 0;
        for(j = 1 ; j <= iCol ; j++)
        {
            if((i % 2 ) != 0)
            {
                printf("%c\t",ch + iCnt);
                iCnt++;
            }
            else
            {
                printf("%d\t",j);
            }

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