#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;
    bool running = true;

    while (running) {
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

 cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed!" << endl;
                break;
            default:
                cout << "Error: Invalid operator!" << endl;
                break;
        }
    }

    cout << endl;
    return 0;
}