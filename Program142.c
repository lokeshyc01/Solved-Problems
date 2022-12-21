#include<stdio.h>

int CountFrequency(char *str,char ch)
{
    int iCnt = 0, i = 0;

    while(*str != '\0')
    {
        if((*str == ch))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;
    
   printf("Please enter a string\n");
    scanf("%[^'\n']s",Arr);

    // printf("Enter the desired character\n");
    // scanf("%c",&ch);

    iRet = CountFrequency(Arr,'a');

    printf("Frequency of letter is : %d",iRet);

    return 0;
}