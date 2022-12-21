#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
     bool bFlag = false;

    while (*str != '\0')
    {
       if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
       {
          bFlag = true;
       }
        else
        {
            bFlag = false;
        }
        str++;
    }
        return bFlag;
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    
    if(bRet == true)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("There is no vowel");
    }
    return 0;
}