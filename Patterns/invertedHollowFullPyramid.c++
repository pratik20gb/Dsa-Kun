#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        // spaces
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }
        // stars
        int totalCOl = n - row ;
        for (int col = 0; col < totalCOl; col = col + 1)
        {
            if (col == 0 || col == totalCOl - 1 || row == 0) 
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}