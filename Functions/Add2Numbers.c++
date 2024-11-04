#include <iostream>
using namespace std;

void sum(int a, int b)
{
    int result = a + b;
    
    cout << " Sum of " << a << " and " << b << " is " << result;
   
}

int main()
{
    int a;
    int b;
    cin >> a >> b;
    sum(a, b);
}