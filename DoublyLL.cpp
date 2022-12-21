#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyLL
{

public: 

 // Characterstics
    PNODE First;
    int Count;

// Behaviour
    DoublyLL();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iPos,int iNo);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);

    void Display();

};

DoublyLL :: DoublyLL()
{
    First = NULL;
    Count = 0;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
        Count++;
    }
    else
    {
       newn->next = First;
       (First)->prev = newn;
       First = newn;
       Count++;
    }
}

void DoublyLL :: InsertLast(int iNo)
{
    PNODE newn = new NODE;
    PNODE temp = First;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
        Count++;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
        Count++;
    }
}

void DoublyLL :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if((First)->next == NULL)
    {
        delete First;
        First = NULL;
        Count--;
    }
    else
    {
        PNODE temp = First;

        First = (First)->next;
        delete (First)->prev;
        (First)->prev = NULL;
        Count--;
    }
}

void DoublyLL :: DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if((First)->next == NULL)
    {
        delete First;
        First = NULL;
        Count--;
    }
    else
    {
        PNODE temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        Count--;
    }
}

void DoublyLL :: Display()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"|NULL|\n";
}

void DoublyLL :: InsertAtPos(int iPos,int iNo)
{
   
    if(iPos < 1 || iPos > Count+1)
    {
        cout<<"Enter a Valid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == Count+1)
    {
        InsertLast(iNo);
    }
    else
    {
        int iCnt = 0;

        PNODE newn = new NODE;
        PNODE temp = First;

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

void DoublyLL :: DeleteAtPos(int iPos)
{

    if(iPos < 1 || iPos > (Count+1))
    {
        cout<<"Enter a Valid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == Count)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = First;
        PNODE temp2 = NULL;
        int iCnt = 0;

        for(iCnt = 1; iCnt < iPos-1;iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next;
        temp2->next->prev = temp1;

        delete temp2;
    }
}


int main()
{

    DoublyLL obj1;

    obj1.InsertFirst(11);
    obj1.InsertFirst(21);
    obj1.InsertFirst(51);

    obj1.Display();
    cout<<"The number of nodes are :"<<obj1.Count<<endl;

    obj1.InsertLast(101);
    obj1.InsertLast(201);
    obj1.InsertLast(301);

    obj1.Display();
    cout<<"The number of nodes are :"<<obj1.Count<<endl;

    obj1.InsertAtPos(3,990);

    obj1.Display();
    cout<<"The number of nodes are :"<<obj1.Count<<endl;

    obj1.DeleteFirst();

    obj1.Display();
    cout<<"The number of nodes are :"<<obj1.Count<<endl;

    obj1.DeleteLast();

    obj1.Display();
    cout<<"The number of nodes are :"<<obj1.Count<<endl;

    obj1.DeleteAtPos(3);

    obj1.Display();
    cout<<"The number of nodes are :"<<obj1.Count<<endl;
    
}