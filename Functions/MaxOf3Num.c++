#include <iostream>
using namespace std;


// Ez
// int printMaximum(int n1 , int n2, int n3){
//     int ans1 = max(n1,n2);
//     int finalAns = max (ans1 ,n3);
//     return finalAns;
// }

int maximum(int a, int b, int c)

{
    if (a > b)
    {
        if (a > c)
        {
            cout << "a is greater";
        }
        else
        {
            cout << "c is greater";
        }
    }
    else if (b > c)
    {
        cout << "b is greater";
    }
    else
    {
        cout << "c is greater";
    }
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
    maximum(a, b, c);
}

// also we can use && operator to make it more simple
//  if (a > b && a > c)
//      {

//         cout << "a is greater";
//     }
//     else if (b > a && b > c)
//     {
//         cout << "b is greater";
//     }
//     else
//     {
//         cout << "c is greater";
//     }