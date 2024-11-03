
#include <iostream> // Include the iostream library for input and output
#include <string>   // Include the string library
#include <fstream>  // Include the file stream library
using namespace std; // Use the standard namespace

int main() { // Main function where execution starts

    // 1. Basic Structure of a C++ Program
    
    
    
        cout<<"coderKun";
        return 0;
    
    

    // 2. Comments
    /*
    // This is a single-line comment
    /*
    This is a 
    multi-line comment
    */
    

    // 3. Variables and Data Types
    /*
    int age = 25; // Integer
    float salary = 50000.50; // Floating-point
    double pi = 3.14159; // Double precision floating-point
    char grade = 'A'; // Character
    bool isActive = true; // Boolean
    */

    // 4. Input and Output
    /*
    cout << "Hello, World!" << endl; // Output to console
    cin >> age; // Input from user
    */

    // 5. Control Structures

    // a. If Statement
    /*
    if (age >= 18) {
        cout << "Adult" << endl;
    } else {
        cout << "Minor" << endl;
    }
    */

    // b. Switch Statement
    /*
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        default:
            cout << "Grade not recognized." << endl;
    }
    */

    // c. For Loop
    /*
    for (int i = 0; i < 5; i++) {
        cout << i << endl; // Print numbers from 0 to 4
    }
    */

    // d. While Loop
    /*
    int i = 0;
    while (i < 5) {
        cout << i << endl; // Print numbers from 0 to 4
        i++;
    }
    */

    // e. Do While Loop
    /*
    int j = 0;
    do {
        cout << j << endl; // Print numbers from 0 to 4
        j++;
    } while (j < 5);
    */

    // 6. Functions
    /*
    // Function declaration
    int add(int a, int b) {
        return a + b; // Function definition
    }

    // Function call
    int result = add(5, 3);
    */

    // 7. Arrays
    /*
    int numbers[5] = {1, 2, 3, 4, 5}; // Array declaration and initialization
    cout << numbers[0]; // Accessing the first element
    */

    // 8. Strings
    /*
    string name = "John Doe"; // String declaration
    cout << name; // Output the string
    */

    // 9. Pointers
    /*
    int var = 10;
    int* ptr = &var; // Pointer declaration and initialization
    cout << *ptr; // Dereferencing the pointer to get the value
    */

    // 10. Classes and Objects
    /*
    class Car {
    public:
        string brand;
        void honk() {
            cout << "Beep beep!" << endl;
        }
    };

    Car myCar; // Create an object of Car
    myCar.brand = "Toyota"; // Accessing class member
    myCar.honk(); // Calling class method
    */

    // 11. Basic Input/Output with Files
    /*
    ofstream outFile("output.txt"); // Create an output file stream
    outFile << "Hello, File!" << endl; // Write to file
    outFile.close(); // Close the file

    ifstream inFile("output.txt"); // Create an input file stream
    string line;
    getline(inFile, line); // Read a line from the file
    cout << line; // Output the line
    inFile.close(); // Close the file
    */

    // 12. Error Handling
    /*
    try {
        // Code that may throw an exception
    } catch (exception& e) {
        cout << "Error: " << e.what() << endl; // Handle the exception
    }
    */

   //  return 0; // Return statement
}