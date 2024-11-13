#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << "Address of a :" << &a << endl;

    int arr[10];
    cout << "Base address of Arr is : " << &arr << endl;
    cout << "Base address of Arr is : " << arr << endl;// by default arr describe base address only with or without &
    
}