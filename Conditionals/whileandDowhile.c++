#include <iostream>
using namespace std;
int main()
{
    // Example 1: Using a while loop to print numbers from 1 to 5
    
    int i = 1;
    while (i <= 5) 
    {
        cout << "Number: " << i << endl; // Print the current number
        i++; // Increment the counter
    }
    

    // Example 2: Using a do while loop to print numbers from 1 to 5
    /*
    int j = 1;
    do 
    {
        cout << "Number: " << j << endl; // Print the current number
        j++; // Increment the counter
    } while (j <= 5);
    */

    // Example 3: Using a while loop to find the sum of numbers until a user enters 0
    /*
    int sum = 0;
    int num;
    cout << "Enter numbers to sum (0 to stop): ";
    cin >> num;
    while (num != 0) 
    {
        sum += num; // Add the number to the sum
        cin >> num; // Read the next number
    }
    cout << "Total sum: " << sum << endl; // Print the total sum
    */

    // Example 4: Using a do while loop to ensure at least one input is taken
    /*
    int input;
    do 
    {
        cout << "Enter a positive number (negative to exit): ";
        cin >> input; // Read user input
        if (input >= 0) 
        {
            cout << "You entered: " << input << endl; // Print the entered number
        }
    } while (input >= 0);
    cout << "Exited the loop." << endl; // Message when exiting the loop
    */

    // Example 5: Using a while loop to print the first 10 multiples of 3
    /*
    int count = 1;
    while (count <= 10) 
    {
        cout << "3 x " << count << " = " << 3 * count << endl; // Print the multiple
        count++; // Increment the counter
    }
    */
}
