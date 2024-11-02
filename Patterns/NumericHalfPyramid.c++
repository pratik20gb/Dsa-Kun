#include <iostream>
using namespace std;
int main(){
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    //rows 5
    // colms =5
    int n;
    cin>>n;
    for(int row=1; row<n; row++){
        for(int col=1; col<=row+1 ; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}