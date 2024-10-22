#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the integers
    int num1, num2, sum;

    // Input the two integers from the user
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    // Add the two integers
    sum = num1 + num2;

    // Print the result with a descriptive message
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
