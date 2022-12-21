#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        SinglyLL();
        
       void InsertFirst(int no);
       void InsertLast(int no);
       void InsertAtPos(int iPos,int No);

       void DeleteFirst();
       void DeleteLast();
       void DeleteAtPos(int iPos);

       void Display();
      
};

 SinglyLL :: SinglyLL()
 {
    First = NULL;
    iCount = 0;
 }

 void SinglyLL :: InsertFirst(int no)
 {
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if(First == NULL)      //Check if list contain a node or not 
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
 }

 void SinglyLL :: InsertLast(int no)
 {
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    PNODE temp = NULL;

    if(First == NULL)      //check If List is empty or not
    {
        First = newn;
        iCount++;
    }
    else
    {
        temp = First;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
        iCount++;
    }
 }

 void SinglyLL :: InsertAtPos(int iPos,int no)
 {
    int iCnt = 0;

    if((iPos < 1) || iPos > (iCount + 1))
    {
       cout<<"Enter a valid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = new NODE;

        newn->data = no;
        newn->next = NULL;

        PNODE temp = First;

        for(iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
 }
void SinglyLL :: Display()
{
    PNODE temp = First;
      while (temp != NULL)
    {
       cout<<"|"<<temp->data<<"|->";
       temp = temp->next;
    }
    cout<<"|NULL|"<<endl;
}

void SinglyLL :: DeleteFirst()
{
    if(First == NULL)      //check if there is node or not
    {
        return;
    }
    else if((First)->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;

        First = (First) -> next;
        delete temp;
        iCount--;
    }
}

void SinglyLL :: DeleteLast()
{
     if(First == NULL)
    {
        return;
    }
    else if((First) -> next == NULL)
    {
        delete First;
        First == NULL;
        iCount--;
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
        iCount--;
    }
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    if((iPos < 1) || iPos > iCount)
    {
        printf("Enter a valid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = NULL;
        PNODE temp2 = NULL;

        temp1 = First;

        for(int iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp1 = temp1 -> next;
        }
        temp2 = temp1 -> next;

        temp1 -> next = temp2 -> next;
        delete temp2;

        iCount--;
    }
}
int main()
{
    SinglyLL obj1;

    obj1.InsertFirst(11);
    obj1.InsertFirst(21);
    obj1.InsertFirst(51);
    obj1.InsertFirst(101);

    obj1.Display();
    cout<<"The number of nodes in the list are :"<<obj1.iCount<<endl;

    obj1.InsertLast(201);
    obj1.InsertLast(301);
    obj1.InsertLast(401);

    obj1.Display();
    cout<<"The number of nodes in the list are :"<<obj1.iCount<<endl;
    
    obj1.InsertAtPos(5,99);
    obj1.InsertAtPos(6,98);

    obj1.Display();
    cout<<"The number of nodes in the list are :"<<obj1.iCount<<endl;


    obj1.DeleteFirst();
    obj1.Display();
    cout<<"The number of nodes in the list are :"<<obj1.iCount<<endl;

    obj1.DeleteLast();
    obj1.Display();
    cout<<"The number of nodes in the list are :"<<obj1.iCount<<endl;

    obj1.DeleteAtPos(4
    );
    obj1.Display();
    cout<<"The number of nodes in the list are :"<<obj1.iCount<<endl;

    
    return 0;
}