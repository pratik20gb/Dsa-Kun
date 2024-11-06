#include <iostream>
using namespace std;

int Counting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin >> n;
    Counting(n);
}