#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InserFirst(PPNODE First,int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
       newn->next = *First;
       (*First)->prev = newn;
       *First = newn;
    }
}

void InsertLast(PPNODE First,int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteFirst(PPNODE First)
{
    if(*First == NULL)
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

        *First = (*First)->next;
        free((*First)->prev);
        (*First)->prev = NULL;
    }
}

void DeleteLast(PPNODE First)
{
    if(*First == NULL)
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
    while(First != NULL)
    {
        printf("|%d| -> ",First->data);
        First = First->next;
    }
    printf("|NULL|\n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

void InserAtPos(PPNODE First,int iPos,int iNo)
{
    int iNodeCnt = 0;
    iNodeCnt = Count(*First);

    if(iPos < 1 || iPos > (iNodeCnt+1))
    {
        printf("Enter a Valid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InserFirst(First,iNo);
    }
    else if(iPos == iNodeCnt+1)
    {
        InsertLast(First,iNo);
    }
    else
    {
        int iCnt = 0;

        PNODE newn = (PNODE)malloc(sizeof(NODE));
        PNODE temp = *First;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;
        
        for(iCnt = 1; iCnt < iPos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

    }
}

void DeleteAtPos(PPNODE First,int iPos)
{
    int iNodeCnt = 0;
    iNodeCnt = Count(*First);

    if(iPos < 1 || iPos > (iNodeCnt+1))
    {
        printf("Enter a Valid Position\n");
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
        PNODE temp1 = *First;
        PNODE temp2 = NULL;
        int iCnt = 0;

        for(iCnt = 1; iCnt < iPos-1;iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next;
        temp2->next->prev = temp1;

        free(temp2);
    }
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InserFirst(&Head,51);
    InserFirst(&Head,21);
    InserFirst(&Head,11);

    iRet = Count(Head);
    Display(Head);
    printf("The number of nodes are %d\n",iRet);

    InsertLast(&Head,101);
    InsertLast(&Head,201);
    InsertLast(&Head,301);

    iRet = Count(Head);
    Display(Head);
    printf("The number of nodes are %d\n",iRet);

    DeleteFirst(&Head);

    iRet = Count(Head);
    Display(Head);
    printf("The number of nodes are %d\n",iRet);

    DeleteLast(&Head);
    
    iRet = Count(Head);
    Display(Head);
    printf("The number of nodes are %d\n",iRet);

    InserAtPos(&Head,3,99);

    iRet = Count(Head);
    Display(Head);
    printf("The number of nodes are %d\n",iRet);

    DeleteAtPos(&Head,3);
    Display(Head);
    printf("The number of nodes are %d\n",iRet);

    return 0;
}