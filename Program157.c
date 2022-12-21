#include<stdio.h>

// int length(char *str)
// {
//     int iCnt = 0;

//     while (*str != '\0')
//     {
//         iCnt++;
//         str++;
//     }
//     return iCnt;
// }

void strrevX(char *str) 
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
    char Arr[20];
    
    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Reverse string is : %s\n",Arr);

    return 0;
}