#include <iostream>
using namespace std ;
int main(){
    int arr[5];

    //taking input
    int n = 5;
    for(int i=0; i<n; i++){
        cout<< " enter the value for the index : " << " ";
        cin>>arr[i];

    }
    //calculate sum
    int sum =0 ; 
    for(int i=0 ; i<n; i++){
        sum = sum + arr[i];

    }
    cout<< " printing sum: " << sum << endl ;
}