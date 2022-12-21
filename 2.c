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
void DisplayPrime(PNODE Head)
{
    int iNo = 0,iCnt = 0;
   while (Head != NULL)
   {
        while (iCnt < 1 && iCnt > Head->data)
        {
            if(Head->data % 2 == 0)
            {
                printf("%d",Head->data);
            }
        }
        
    Head = Head->next;
   }
   
}
int main()
{
    PNODE First = NULL;
    int no,iRet = 0;;

    InsetFirst(&First,47);
    InsetFirst(&First,51);
    InsetFirst(&First,20);
    InsetFirst(&First,11);

    DisplayPrime(First);

  

    return 0;
}