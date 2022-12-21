#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(PNODE));
    PNODE temp =  *First;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;
    if(*First == NULL)
    {
        return;
    }
    else if ((*First) -> next != NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        while(temp ->next ->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
    }
}
void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;
    if(*First == NULL)
    {
        return;
    }
    else if ((*First) -> next != NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        *First = (*First)->next;
        free(temp);

    }
}
int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        First = First->next;
        iCnt++;
    }
    return iCnt;
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d | -> ",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE Head = NULL;
    int iRet  = 0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    iRet = Count(Head);
    Display(Head);
    printf("The number of node in the linked list are : %d \n",iRet);

    InsertLast(&Head,101);

     iRet = Count(Head);
    Display(Head);
    printf("The number of node in the linked list are : %d \n",iRet);

    return 0;
}