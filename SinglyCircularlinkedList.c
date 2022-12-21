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

void InsertFirst(PPNODE First,PPNODE Last,int no)
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

void InsertLast(PPNODE First,PPNODE Last,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL && *Last == NULL)
    {
        *First = *Last = NULL;
        (*Last)->next = *First;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    if(*First == NULL && *Last == NULL)
    {
        return;
    }
    else if(*First == (*Last)->next)
    {
        free(*First);
        free(*Last);
        *First = *Last = NULL;
    }
    else
    {
        PNODE temp = *First;

        *First = (*First)->next;
        free(temp);
        (*Last)->next = *First;
    }
}
// void DeleteLast(PPNODE First,PPNODE Last)
// {
//     if(*First == NULL && *Last == NULL)
//     {
//         return;
//     }
//     else if(*First == (*Last)->next)
//     {
//         free(*First);
//         *First = *Last = NULL;
//     }
//     else
//     {
//         PNODE temp = *First;

//         while (temp->next->next != *First)
//         {
//             temp = temp->next;
//         }
//         free(temp->next);
        
        
//     }
// }
int Count(PNODE First,PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First->next;
    } while (First != (Last)->next);
    return iCnt++;
}

void Display(PNODE First,PNODE Last)
{
    do
    {
        printf("|%d|->",First->data);
        First = First->next;
    }while(First != Last->next);
    printf("\n");
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

    Display(Head, Tail);
    iRet = Count(Head, Tail);

    printf("Number of elements are : %d\n",iRet);
    return 0;
}