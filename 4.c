#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelcius = 0.0;

    dCelcius = (fTemp - 32) * (5/9);

   return dCelcius;
    
}

int main()
{
    float fValue1 = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit\n");
    scanf("%f",&fValue1);

    dRet = FhtoCs(fValue1);

    printf("Temperature in Celcius : %lf",dRet);

    return 0;
}