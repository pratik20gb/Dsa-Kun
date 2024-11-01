#include <iostream>
using namespace std;
int main()
{
    // The following loop is commented out. It demonstrates a simple for loop that prints "coder kun" five times.
    for (int i = 1; i <= 5; i++)
    {
        cout << "coder kun" << endl; // Print "coder kun" for each iteration
    }

    // Outer loop: iterates from 1 to 10
    for (int i = 1; i <= 10; i++) 
    {
        cout << "outerLoop" << " " << i << endl; // Print the current iteration of the outer loop
        // Inner loop: iterates from 1 to 10 for each iteration of the outer loop
        for(int j = 1; j <= 10; j++) 
        {
            cout << "InnerLoop" << j << endl; // Print the current iteration of the inner loop
        }
    }
}