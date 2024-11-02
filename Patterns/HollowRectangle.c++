#include <iostream>
using namespace std;
int main()
{
    int rows, colms;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> colms;
    for (int row = 0; row < rows; row = row + 1)
    {
        // inner loop
        for (int col = 0; col < colms; col = col + 1)
        {
            if (row == 0 || row == rows-1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == colms-1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}