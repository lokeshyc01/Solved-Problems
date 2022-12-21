#include<stdio.h>

void strcpyX(char *src,char *dest)
{
   while(*src != '\0')
   {
        *dest = *src;

        dest++;
        src++;
   }
   *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];
    
    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("Copied string is : %s\n",Brr);
    printf("Original string is : %s\n",Arr);

    return 0;
}