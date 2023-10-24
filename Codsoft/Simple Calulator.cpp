#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    double num1, num2;
    char operation;
    
    cout << "Simple Calculator" << endl;
    cout << "Enter an expression (e.g., 5 + 3): ";
    
    cin >> num1 >> operation >> num2;

    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (operation == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (operation == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero." << endl;
        }
    } else {
        cout << "Error: Invalid operator." << endl;
    }

    return 0;
}
