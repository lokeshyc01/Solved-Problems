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
int Maximum(PNODE Head)
{
    int iMax = 0;
    while (Head != NULL)
    { 
       if(Head->data > iMax)
       {
            iMax = Head->data;
       }
       Head = Head->next;
    }
    return iMax;
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

    iRet = Maximum(First);

    printf("Largest element is : %d\n",iRet);

    return 0;
}