#include <iostream>
using namespace std;
void printC()
{
    cout << "inside C"<<endl;
    cout<<"going back to main"<<endl;
}
void printB()
{
    cout << "inside B"<<endl;
    printC();
}
void printA()
{
    cout<<"inside A"<<endl;
    printB();
}
int main()
{
    cout << "inside main"<<endl;
    printA();
    cout<<"returned to main"<<endl;
    return 0;
}