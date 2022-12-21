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
void DisplayPerfect(PNODE Head)
{
    int iCnt = 0,iSum = 0;
    
    while (Head != NULL)
    {
        while (Head->data >= iCnt)
        {
            if(Head->data % iCnt == 0)
            {
                iSum = iSum + iCnt;
                iCnt++;
            }
            else
            {
                iCnt++;
            }
        }
        if ( (Head->data) == iSum)
        {
            printf("%d",Head->data);
        }
        else
        {
            return;
        }
       Head = Head->next;
    }
    
    
}
int main()
{
    PNODE First = NULL;
    int no,iRet = 0;;

    InsetFirst(&First,40);
    InsetFirst(&First,30);
    InsetFirst(&First,20);
    InsetFirst(&First,10);

    DisplayPerfect(First);

  

    return 0;
}