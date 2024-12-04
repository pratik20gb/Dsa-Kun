
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,45,11};
    int target  =3;
    int n =5;
    bool flag = 0;
    //o = not found
    // 1 =found 

    for(int i =0 ; i<n; i++ ){
        if(arr[i]== target){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<< "target found";

    }
    else{
        cout<< " target not found";
    }

}
