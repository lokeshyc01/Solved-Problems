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

void InsertFirst(PPNODE First,PPNODE Last,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL && *Last == NULL)      //Check if list contain a list or not 
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First,PPNODE Last,int No)
{
    
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*First == NULL && *Last == NULL)      //Check if list contain a list or not 
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        (*Last) -> next = newn;
        *Last = newn;
        (*Last) -> next = *First;
    }
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    if(*First == NULL && *Last == NULL)      //check if there is node or not
    {
        return;
    }
    else if((*First) == (*Last))
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        PNODE temp = *First;
        *First = (*First) -> next;
        free(temp);
        (*Last)->next = *First;
    }
}

void DeleteLast(PPNODE First,PPNODE Last)
{
    if((*First) == NULL && (*Last) == NULL)
    {
        return;
    }
    else if((*First) == (*Last))
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        PNODE temp = *First;

        while(temp->next != *Last)
        {
            temp = temp->next;
        }

        free(temp->next);
        *Last = temp->next;
        (*Last)->next = *First;
    }
}
void Display(PNODE First,PNODE Last)
{
     printf("Elements of Linked list are : \n");

    do
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }while(First != Last->next);
    printf("|NULL|\n");
}

int Count(PNODE First,PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First -> next;
    }while(First != Last->next);
    return iCnt;
}

void InsertAtPos(PPNODE First,PPNODE Last,int iPos,int No)
{
    int iNodeCnt = 0,iCnt = 0;
    iNodeCnt = Count(*First,*Last);
    PNODE temp = NULL;
    PNODE newn = NULL;


    if((iPos < 1) || iPos > (iNodeCnt + 1))
    {
        printf("Enter a valid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First,Last,No);
    }
    else if(iPos == iNodeCnt+1)
    {
        InsertLast(First,Last,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        temp = *First;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
    int iNodeCnt = 0,iCnt = 0;
    iNodeCnt = Count(*First,*Last);

    if((iPos < 1) || iPos > iNodeCnt)
    {
        printf("Enter a valid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if(iPos == iNodeCnt)
    {
        DeleteLast(First,Last);
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
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head,&Tail,11);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,51);

    Display(Head,Tail);

    return 0;
}