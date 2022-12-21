#include<stdio.h>

void Display(char ch)
{
   printf("Decimal\t Octal \t Hexadecimal\n");
   printf("%d %x %o",ch,ch,ch);
}
int main()
{
    char cValue = '\0';
   

    printf("Enter the character\n");
    scanf("%c",&cValue);

   Display(cValue);
    return 0;
}