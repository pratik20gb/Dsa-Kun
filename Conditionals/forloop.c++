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

    // Example 1: Print even numbers from 2 to 20
    /*
    for (int i = 2; i <= 20; i += 2) 
    {
        cout << "Even number: " << i << endl; // Print even numbers
    }
    */

    // Example 2: Print the multiplication table of 5
    /*
    for (int i = 1; i <= 10; i++) 
    {
        cout << "5 x " << i << " = " << 5 * i << endl; // Print multiplication table
    }
    */

    // Example 3: Print the first 10 Fibonacci numbers
    /*
    int a = 0, b = 1;
    cout << "Fibonacci series: ";
    for (int i = 0; i < 10; i++) 
    {
        cout << a << " "; // Print Fibonacci number
        int next = a + b; // Calculate next Fibonacci number
        a = b; // Update a
        b = next; // Update b
    }
    cout << endl;
    */

    // Example 4: Print a countdown from 10 to 1
    /*
    for (int i = 10; i >= 1; i--) 
    {
        cout << "Countdown: " << i << endl; // Print countdown
    }
    */

    // Example 5: Print the squares of numbers from 1 to 10
    /*
    for (int i = 1; i <= 10; i++) 
    {
        cout << "Square of " << i << " is " << i * i << endl; // Print square of each number
    }
    */
}