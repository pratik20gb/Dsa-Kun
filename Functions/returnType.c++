#include <iostream>
using namespace std;

int printSum(int a, int b, int c)
{
    int ans = a + b + c;
    return ans;
}
int main()
{
    int a, b, c;
    cout << "Enter Number 1 : ";
    cin >> a;
    cout << "Enter Number 2 : ";

    cin >> b;
    cout << "Enter Number 3 : ";

    cin >> c;
    int sum = printSum(a, b, c);
    cout << "The sum is : " << sum << endl;
}