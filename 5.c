#include<stdio.h>

int StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    // end = length(str);
    end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

     StrRevX(arr);

    printf("Modified string is %s",arr);
    return 0;
}