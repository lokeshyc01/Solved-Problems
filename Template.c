#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;

    int iLength = 0, i = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    
    return 0;
}