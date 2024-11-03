#include <iostream>
using namespace std;
int main(){
    // rows = 5 
    // cols  = 5 
    // row 5  = 5 star and then decending
    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}