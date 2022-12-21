#include<stdio.h>
#include<string.h>
void Number(int iNo)
{
   char arr[10][9] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
   printf("%s",arr[iNo]);
}
int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}