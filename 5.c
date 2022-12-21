#include<stdio.h>
#define TRUE 1
#define FALSE 0

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("7 AM\n");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("8.30 AM\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("9.20 AM\n");
    }
    else if (chDiv == 'D' || chDiv == 'd')
    {
        printf("10.30 AM");
    }
    else 
    {
        printf("Enter Correct Grade");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}