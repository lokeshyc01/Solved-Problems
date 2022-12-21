#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double Area = 0.0;

    Area = (double)PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("enter radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf",dRet);
    return 0;
}