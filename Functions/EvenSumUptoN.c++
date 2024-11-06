#include <iostream>
using namespace std;

void EvenSumUptoN(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    cout << "final sum: " << sum << endl;
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    EvenSumUptoN(n);
}