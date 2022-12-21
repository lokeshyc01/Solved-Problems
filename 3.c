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
int Addition(PNODE Head)
{
    int iAns = 0;
    while (Head != NULL)
    { 
       iAns = iAns + Head->data;
        Head = Head->next;
    }
    return iAns;
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

    iRet = Addition(First);

    printf("Addition is : %d\n",iRet);

    return 0;
}