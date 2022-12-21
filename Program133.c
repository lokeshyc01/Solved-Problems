#include<stdio.h>

int main()
{
    char Arr[50];
    printf("Enter Your Name\n");
//As array name is internally considered as base address of that array
    // scanf("%s",Arr);

    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);
    return 0;
}