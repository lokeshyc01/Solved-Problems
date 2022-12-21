#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)      //Check if list contain a list or not 
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    PNODE temp = NULL;

    if(*First == NULL)      //check If List is empty or not
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE First)
{
    if(*First == NULL)      //check if there is node or not
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        PNODE temp = *First;

        *First = (*First) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    if(*First == NULL)
    {
        return;
    }
    else if((*First) -> next == NULL)
    {
        free(*First);
        *First == NULL;
    }
    else
    {
        PNODE temp = *First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}
void Display(PNODE First)
{
    while (First != NULL)
    {
        printf("|%d|->",First->data);
       First = First->next;
    }
    printf("|NULL|\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while (First != NULL)
    {
       iCnt++;
       First = First->next;
    }
    return iCnt;
}

void InsertAtPos(PPNODE First,int iPos,int No)
{
    int iNodeCnt = 0,iCnt = 0;
    iNodeCnt = Count(*First);
    PNODE temp = NULL;
    PNODE newn = NULL;


    if((iPos < 1) || iPos > (iNodeCnt + 1))
    {
        printf("Enter a valid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First,No);
    }
    else if(iPos == iNodeCnt+1)
    {
        InsertLast(First,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        temp = *First;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

void DeleteAtPos(PPNODE First,int iPos)
{
    int iNodeCnt = 0,iCnt = 0;
    iNodeCnt = Count(*First);

    if((iPos < 1) || iPos > iNodeCnt)
    {
        printf("Enter a valid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == iNodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        PNODE temp1 = NULL;
        PNODE temp2 = NULL;

        temp1 = *First;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp1 = temp1 -> next;
        }
        temp2 = temp1 -> next;

        temp1 -> next = temp2 -> next;
        free(temp2);

    }
       
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);
    InsertLast(&Head,101);

    Display(Head);
    iRet = Count(Head);

    printf("The number of nodes in the list are %d\n",iRet);

    InsertAtPos(&Head,3,31);
    InsertAtPos(&Head,4,201);

    iRet = Count(Head);
    Display(Head);

    printf("The number of nodes in the list are %d\n",iRet);

    DeleteFirst(&Head);

    Display(Head);
    iRet = Count(Head);

    printf("The number of nodes in the list are %d\n",iRet);

    DeleteLast(&Head);

    Display(Head);
    iRet = Count(Head);

    printf("The number of nodes in the list are %d\n",iRet);

    DeleteAtPos(&Head,3);

    Display(Head);
    iRet = Count(Head);

    printf("The number of nodes in the list are %d\n",iRet);

    return 0;
}