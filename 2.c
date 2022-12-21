#include<stdio.h>
#define PI 3.14

double RectArea(float fRadius1,float fRadius2)
{
    double Area = 0.0;

    Area = fRadius1 * fRadius2;

    return Area;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("enter width\n");
    scanf("%f",&fValue1);

    printf("enter height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of rectangle is : %lf",dRet);
    return 0;
}