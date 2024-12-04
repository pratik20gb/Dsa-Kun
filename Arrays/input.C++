#include <iostream>
using namespace std ;
int main(){


    int arr[5];
    int n = 5;
    for(int i=0; i<n; i++){
        cout<<"enter the value for index "<< i <<": ";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"Printing the array " << endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


// arr[i] = =  value at ( base address + dataype size  * index) 

// 2 4 6 8 10 
// 104 108 112 116 120 

// 104 + 4*1