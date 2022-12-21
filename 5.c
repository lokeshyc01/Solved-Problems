#include<stdio.h>
#define SquareFeet 0.0929

double SquareMeter(int iValue)
{
    double dSquarefeet = 0.0;

    dSquarefeet = iValue * SquareFeet;

    return dSquarefeet;
    
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter : %lf",dRet);
    
    return 0;
}