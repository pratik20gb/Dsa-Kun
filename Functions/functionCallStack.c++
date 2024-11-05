#include <iostream>
using namespace std;

void C() {
    cout << "In function C" << endl;
}

void B() {
    cout << "In function B" << endl;
    C(); // Call to function C
}

void A() {
    cout << "In function A" << endl;
    B(); // Call to function B
}

int main() {
    A(); // Start the call stack
    return 0;
}
// Execution Flow:
// 1. main() is called, and a frame for main is pushed onto the stack.
// A() is called from main, pushing a frame for A onto the stack.
// 3. B() is called from A, pushing a frame for B onto the stack.
// 4. C() is called from B, pushing a frame for C onto the stack.
// C() completes and its frame is popped off the stack.
// B() completes and its frame is popped off the stack.
// A() completes and its frame is popped off the stack.
// main() completes and its frame is popped off the stack.
// This sequence illustrates how the call stack manages function calls and returns in C++.