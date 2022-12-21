#include<iostream>
using namespace std;

//Problems on N Numbers
class ArrayX
{
   public:
        int iSize;
        int *Arr;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Please enter the number : "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<" : "<<"\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize ; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        int SumEven()
        {
            int iCnt = 0,iSum = 0;
            for(iCnt = 0; iCnt < iSize ; iCnt++)
            {
               if((Arr[iCnt] % 2) == 0 )
               {
                    iSum = iSum + Arr[iCnt];
               }
            }
            return iSum;
        }
};

int main()
{
    int iLength = 0,iRet = 0;

    cout<<"enter the number of elements : "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();
    
    iRet = obj.SumEven();
    cout<<"Sum of even numbers are : "<<iRet;

    return 0;
}