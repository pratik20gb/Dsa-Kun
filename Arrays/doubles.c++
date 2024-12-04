#include <iostream>
using namespace std;
int main(){
    int arr[10];
    int n =10;
    for(int i=0; i<n; i++){
        cout<<" enter the value for index "<< i  << ": ";
        cin>>arr[i];
    }
    cout<<"Printing the  array after taking Input " ;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<"Printing the double up array " ;
    for(int i=0; i<n; i++){
        arr[i] =2*arr[i];
        
    }
    for(int i=0; i<n; i++){
        cout<<  arr[i]<<" ";
        
    }
}