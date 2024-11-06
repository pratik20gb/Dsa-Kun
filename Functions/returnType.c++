#include <iostream>
using namespace std;

int printSum(int a, int b, int c)
{
    int ans = a + b + c;
    return ans;
}
// also we can use return inside void function but we cant send data ;
void messageInt()
{
    cout << "Coder kun " << endl;
    return; // it will terminate from here and will return to main function
    cout << "MSG1" << endl; //this will not get executed
}
int main()
{
    messageInt();


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
