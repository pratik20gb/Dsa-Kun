#include <iostream>
using namespace std;

// return true  - > prime
// return False  - > Noneprime
bool checkPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 )
        {
            // remainder 0 -> divisible
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "enter no  ";
    cin >> n;
    bool prime = checkPrime(n);
    if (prime)
    {
        cout << "its a Prime number";
    }
    else
    {
        cout << "its not a Prime number";
    }
}

//Or

// #include <iostream>
// #include <cmath> // For sqrt function
// using namespace std;

// bool isPrime(int n) {
//     // Check if n is less than 2
//     if (n < 2) return false;

//     // Check for factors from 2 to sqrt(n)
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             return false; // n is divisible by i, so it's not prime
//         }
//     }
//     return true; // n is prime
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (isPrime(n)) {
//         cout << n << " is a prime number." << endl;
//     } else {
//         cout << n << " is not a prime number." << endl;
//     }

//     return 0;
// }