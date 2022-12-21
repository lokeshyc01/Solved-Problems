#include<iostream>
using namespace std;
class ArrayX
{
    public:
        int *Arr;
        int iSize;

       ArrayX(int i)
       {
            iSize = i;

            Arr = new int[iSize];
       }

       void accept()
       {
            for (int  i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
            
       }
       void DisplaY()
       {
            for (int  i = 0; i < iSize; i++)
            {
                cout<<Arr[i];
            }
       }
};

class MarvellousLB : public ArrayX
{
    public:
    MarvellousLB(int i) : ArrayX(i)
    {}

    int Minimum()
    {
        int min = Arr[0];

        for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            if(min > Arr[iCnt])
            {
                min = Arr[iCnt];
            }
        }
        return min;
    }
};

int main()
{

    int iLength = 0,iRet = 0;;
    
    cout<<"Enter the size of array"<<endl;

    cin>>iLength;

    MarvellousLB * obj = new MarvellousLB(iLength);

    obj->accept();
    obj->DisplaY();

    iRet = obj->Minimum();

    return 0;
}