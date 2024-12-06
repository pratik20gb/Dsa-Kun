#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// present = true;
// absent  = false;

bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    // not found
    return false;
}

int main()
{
    // size  =5
    //  solve(arr,size)

    int arr[5] = {2, 3, 4, 5, 6};
    int size = 5;
    int target = 2;
    bool ans = linearSearch(arr, size, target);
    // printArray(arr, size);
    if (ans == 1)
    {
        cout << "target found" << endl;
    }
    else
    {
        cout << "Target Not found" << endl;
    }

    return 0;
}