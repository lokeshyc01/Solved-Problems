#include<iostream>
using namespace std;

class Array
{
    public:
    int iSize;
    int *Arr;

    Array(int iLength = 10)
    {
        iSize = iLength;
        Arr = new int[iSize];
    }
    ~Array()
    {
        delete []Arr;
    }
};

int main()
{


    return 0;
}