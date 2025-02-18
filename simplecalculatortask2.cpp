#include <iostream>

using namespace std;

 
double calculate(double num1, double num2, char operation) {
    switch (operation) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': 
            if (num2 != 0)
                return num1 / num2;
            else {
                cout << "Error! Division by zero is not allowed." << endl;
                return 0;
            }
        default:
            cout << "Invalid operation!" << endl;
            return 0;
    }
}

int main() {
    double num1, num2;
    char operation;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;
    
    double result = calculate(num1, num2, operation);
    
    cout << "Result: " << result << endl;
    
    return 0;
}
