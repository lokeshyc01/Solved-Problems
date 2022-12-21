#include<stdio.h>

int main()
{
    char ch[10];
    printf("Enter Your Name\n");
//As array name is internally considered as base address of that array
    scanf("%s",ch);

    printf("Your name is : %s\n",ch);
    return 0;
}