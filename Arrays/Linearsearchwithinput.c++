#include <iostream>
using namespace std;
int main()
{

    int arr[5];
    int n = 5;

    int target = 2;
    bool flag = 0;
    
    for (int i = 0; i < n; i++)
    {
        cout << "enter the value at index " << i << ": " ;
        cin >> arr[i];
        cout<<endl;

    }
   for(int i=0; i<n; i++){
     if(arr[i]== target){
        flag = 1;
        break;
     }
     
   }
   if(flag = 1){
    cout<<"target found";

   }
   else{
    cout<<"target not found";
   }
    

    return 0;
}