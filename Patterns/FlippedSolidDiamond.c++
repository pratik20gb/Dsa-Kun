#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    // part1
    for (int row = 0; row < n; row = row + 1)
    {

        // inverted half pyramid1

        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << "*";
        }

        // full pyramid1
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {
            cout << " ";
        }

        // inverted half pyramid 2

        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << "*";
        }
        cout << endl;
    }

    // part 2

    for (int row = 0; row < n; row = row + 1)
    {

        // half pyramid 1
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "*";
        }
        // full pyramid 2
        for (int col = 0; col < (2 * n) - (2 * row) - 1; col = col + 1)
        {
            cout << " ";
        }

        // half pyramid 2
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}