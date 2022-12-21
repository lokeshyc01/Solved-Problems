#include<iostream>
using namespace std;

struct node
{
   int data;
   struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCL
{
    PNODE First;
    PNODE Last;
    int Count;

    SinglyCL();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iPos,int iNo);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);


};

SinglyCL :: SinglyCL()
{
    First = NULL;
    Last = NULL;
    Count = 0;
}

void SinglyCL :: InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL && Last == NULL)      //Check if list contain a list or not 
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
}
void SinglyCL :: InsertLast(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL && Last == NULL)      //Check if list contain a list or not 
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else
    {
        Last->next = newn;
        Last = newn;
        Last->next = First;
    }
}
int main()
{

    return 0;
}