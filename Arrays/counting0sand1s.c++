#include <iostream>
using namespace std;

void countZeroOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    cout << "ZeroCount :" << zeroCount << endl;
    cout << "OneCount :" << oneCount << endl;
}

int main()
{
    // - 0 1 1 1 0 0 1 1 -

    int arr[] = {0,
                 1,
                 1,
                 0,
                 0,
                 0,
                 0,
                 1};

    // zero  = 3;
    // one =  5;
    int size = 8;
    countZeroOne(arr, size);

    return 0;
}