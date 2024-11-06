#include <iostream>
using namespace std;

void findSumUptoN(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "final sum: " << sum << endl;
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    findSumUptoN(n);
}