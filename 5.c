#include<stdio.h>
float Percentage(int TotalMarks,int ObtainedMarks)
{
   float iPercent = 0.0;

   iPercent = (ObtainedMarks / TotalMarks) * 100;

   return iPercent;
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;
    

   printf("enter total marks\n");
   scanf("%d",&iValue1);

   printf("enter Obtained marks\n");
   scanf("%d",&iValue1);

    fRet = Percentage(iValue1,iValue2);
     
    printf("%f",fRet);
    return 0;
}