#include<stdio.h>

void struprx(char *str)
{
    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        
        str++;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is %s",arr);

    return 0;
}