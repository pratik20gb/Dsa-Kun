#include <iostream>
using namespace std;


void PrintName(string name)//parameter
{
    for (int i = 0; i < 365; i++)
    {
        cout << name << endl;
    }
}
int main()
{
    PrintName("Coding Everyday For a Year");//argument 
}