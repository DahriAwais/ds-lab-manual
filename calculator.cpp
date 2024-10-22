#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double num1, num2;
    char operation;
    
    // Input two numbers from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Input the operation choice
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Perform calculation based on the chosen operation
    switch (operation) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0)
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed!" << endl;
            break;
        default:
            // Handle invalid operator input
            cout << "Error: Invalid operator!" << endl;
            break;
    }

    return 0;
}
