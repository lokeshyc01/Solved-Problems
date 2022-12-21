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

void InserFirst(PPNODE First,PPNODE Last,int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL && *Last == NULL)
    {
        *First = *Last = newn;
        
    }
    else
    {
       newn->next = *First;
       (*First)->prev = newn;
       *First = newn;
    }
       (*First)->prev = *Last;
       (*Last)->next = *First;
}

void InsertLast(PPNODE First,PPNODE Last,int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL)
    {
       *First = *Last = newn;
      
    }
    else
    {
       (*Last)->next = newn;
       newn->prev = *Last;
       *Last = newn;
    }
    (*Last)->next = *First;
    (*First)->prev = *Last;
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    if(*First == NULL && *Last == NULL)
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
    }
    (*First)->prev = *Last;
    (*Last)->next = *First;
}

void DeleteLast(PPNODE First,PPNODE Last)
{
    if(*First == NULL  && *Last == NULL)
    {
        return;
    }
    else if((*First)==(*Last))
    {
        free(*First);
        *First = *Last = NULL;
    }
    else
    {
        *Last = (*Last)->prev;
        free((*First)->prev);
    }
    (*Last)->next = *First;
    (*First)->prev = *Last;
}

void Display(PNODE First,PNODE Last)
{
    if((First) ==  NULL && (Last) == NULL)
    {
        printf("Linked list is empty\n");
    }

    do
    {
        printf("|%d|->",First->data);
        First = First->next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First,PNODE Last)
{
    int iCnt = 0;

   if((First) == NULL && (Last) == NULL)
   {
        return iCnt;
   }

   do
   {
        iCnt++;
        First = First->next;
   } while (First != Last->next);
   
    return iCnt;
}

void InserAtPos(PPNODE First,PPNODE Last,int iPos,int iNo)
{
    int iNodeCnt = 0;
    iNodeCnt = Count(*First,*Last);

    if(iPos < 1 || iPos > (iNodeCnt+1))
    {
        printf("Enter a Valid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InserFirst(First,Last,iNo);
    }
    else if(iPos == iNodeCnt+1)
    {
        InsertLast(First,Last,iNo);
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

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
    int iNodeCnt = 0;
    iNodeCnt = Count(*First,*Last);

    if(iPos < 1 || iPos > (iNodeCnt+1))
    {
        printf("Enter a Valid Position\n");
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
    PNODE Tail = NULL;

    int iRet = 0;

    InserFirst(&Head,&Tail,51);
    InserFirst(&Head,&Tail,21);
    InserFirst(&Head,&Tail,11);

    Display(Head,Tail);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,201);
    InsertLast(&Head,&Tail,301);

    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("The number of elements are : %d\n",iRet);

    InserAtPos(&Head,&Tail,3,990);
    InserAtPos(&Head,&Tail,3,1090);

    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("The number of elements are : %d\n",iRet);

    DeleteFirst(&Head,&Tail);

    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("The number of elements are : %d\n",iRet);

    DeleteLast(&Head,&Tail);

    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("The number of elements are : %d\n",iRet);

    DeleteAtPos(&Head,&Tail,3);

    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("The number of elements are : %d\n",iRet);

    return 0;
}