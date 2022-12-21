#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
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
void InsertLast(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // X

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
    else if(((*First)->next) == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*First)->prev);
        (*First)->prev = NULL;

    }
}
void DeleteLast(PPNODE First)
{
     PNODE temp = *First;

    if(*First == NULL)
    {
        return;
    }
    else if(((*First)->next) == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
       while (temp->next->next != NULL)
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
       printf("|%d|<=>",First->data);
       First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while (First != NULL)
    {
        iCnt++;
    }
    return iCnt;
}

void InsertAtPos(PPNODE First,int no,int iPos)
{
    int NodeCnt = 0,iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count(*First);


    if((iPos < 1) || (iPos > (NodeCnt+1)))
    {
        printf("Please enter valid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First,no);
    }
    else if(iPos == NodeCnt+1)
    {
        InsertLast(First,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL; 
        temp = *First;

        for(iCnt = 1;iCnt < iPos - 1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,51);
        Display(Head);
    InsertFirst(&Head,21);
    Display(Head);

    InsertFirst(&Head,11);
    Display(Head);

    InsertFirst(&Head,1);
    Display(Head);

    InsertLast(&Head,101);
    Display(Head);

    InsertAtPos(&Head,105,2);
    Display(Head);

    DeleteFirst(&Head);
    DeleteLast(&Head);
    Display(Head);

    return 0;
}