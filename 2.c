#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;
void InsetFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}
int SearchLastOcc(PNODE Head , int no)
{
    int index = 0;
    int iCnt = 0;
    while (Head != NULL)
    { 
        iCnt++;
        if(Head->data == no)
        {
            index = iCnt;
        }
        Head = Head->next;
    }
    return index;
}
int main()
{
    PNODE First = NULL;
    int no,iRet = 0;;

    InsetFirst(&First,11);
    InsetFirst(&First,101);
    InsetFirst(&First,51);
    InsetFirst(&First,21);
    InsetFirst(&First,11);

    printf("Enter the number you want to search\n");
    scanf("%d",&no);

    iRet = SearchLastOcc(First,no);

    if(iRet == -1)
    {
        printf("Number is not present");
    }
    else
    {
        printf("Last occurance of the number : %d\n",iRet);
    }


    return 0;
}