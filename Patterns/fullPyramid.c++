#include <iostream>
using namespace std;
int main()
{
// 1 2 3 4 5 * 1 2 3 4 5 

    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        int k=0;
        for (int col = 0; col < ((2 * n) - 1); col++)
        {
            if(col<(n-row-1)){
                cout<<" ";

            }else if(k<2*row + 1){
                cout<<"*";
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
}