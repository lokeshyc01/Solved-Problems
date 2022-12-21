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

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))    // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // LL contains atleast one node
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))    // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // LL contains atleast one node
    {
        (*Last) -> next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements of Linked list are : \n");

    do
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First -> next;
    }while(First != Last->next);
    return iCnt;
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
    }
}
void DeleteLast(PPNODE First,PPNODE Last)
{
    if((*First) == NULL && (*Last) == NULL)     //Empty LL
    {
        return;
    }
    else if(*First == *Last)            //Single node in LL
    {
        free(*First);
        *First = *Last = NULL;
    }
    else      //If LL contain more than 1 node
    {
        PNODE temp = *First;

        // while(temp->next->next != (*First))
        // {
        //     temp = temp->next;
        // }
        // free(temp->next);
        // *Last = temp;
        // (*Last)->next = *First;

        // Sir LOGIC

        while (temp->next != (*Last))
        {
            temp = temp->next;
        }
        
        free(temp->next); 
        *Last = temp;
        (*Last)->next = *First;
       
    }
}

void InsertAtPos(PPNODE First, PPNODE Last, int no, int iPos)
{
    int iNodeCnt = 0;
    PNODE newn = NULL;
    int iCnt = 0;

    iNodeCnt = Count(*First,*Last);

    if(iPos < 1 || iPos > 1)
    {
        printf("Invalid Position\n");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(First,Last,no);
    }
    else if(iPos == iNodeCnt+1)
    {
        InsertLast(First,Last,no);
    }
    else
    {
        int iCnt = 0;
        PNODE temp = *First;
        newn = (PNODE)malloc(sizeof(NODE));

        for(iCnt = 1;iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}
void DeleteAtPos(PPNODE First, PPNODE Last, int no, int iPos)
{
    int iNodeCnt = 0;
    iNodeCnt = Count(*First,*Last);

    if(iPos < 1 || iPos > 1)
    {
        printf("Invalid Position\n");
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

    }
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;
    
    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);
    
    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n",iRet);

    DeleteFirst(&Head,&Tail);
    DeleteLast(&Head,&Tail);

     Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n",iRet);

    return 0;
}