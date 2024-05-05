#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter operator (+, -, *, /, s-sin, c-cos, t-tan, l-log, q-sqrt): ";
    cin >> operation;

    switch (operation) {
        case '+':
        case '-':
        case '*':
        case '/':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (operation == '+')
                cout << "Result: " << num1 + num2 << endl;
            else if (operation == '-')
                cout << "Result: " << num1 - num2 << endl;
            else if (operation == '*')
                cout << "Result: " << num1 * num2 << endl;
            else if (operation == '/') {
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero" << endl;
            }
            break;
        case 's':
        case 'c':
        case 't':
        case 'l':
        case 'q':
            cout << "Enter a number: ";
            cin >> num1;
            if (operation == 's')
                cout << "Result: " << sin(num1) << endl;
            else if (operation == 'c')
                cout << "Result: " << cos(num1) << endl;
            else if (operation == 't')
                cout << "Result: " << tan(num1) << endl;
            else if (operation == 'l')
                cout << "Result: " << log(num1) << endl;
            else if (operation == 'q') {
                if (num1 >= 0)
                    cout << "Result: " << sqrt(num1) << endl;
                else
                    cout << "Error: Square root of a negative number" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator" << endl;
    }

    return 0;
}
