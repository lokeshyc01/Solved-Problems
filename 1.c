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
int SearchFirstOcc(PNODE Head , int no)
{
    int iCnt = 0;
    while (Head != NULL)
    { 
        iCnt++;
        if(Head->data == no)
        {
            break;
        }
        Head = Head->next;
    }
   
    if(Head==NULL)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    PNODE First = NULL;
    int no,iRet = 0;;

    InsetFirst(&First,101);
    InsetFirst(&First,51);
    InsetFirst(&First,21);
    InsetFirst(&First,11);

    printf("Enter the number you want to search\n");
    scanf("%d",&no);

    iRet = SearchFirstOcc(First,no);

    if(iRet == -1)
    {
        printf("Number is not present");
    }
    else
    {
        printf("Number is present at position : %d\n",iRet);
    }


    return 0;
}