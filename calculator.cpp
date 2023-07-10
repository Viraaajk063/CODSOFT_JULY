#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    float result;
    bool validOperation = true;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            result = num1 / num2;
        else
        {
            cout << "Error: Division by zero is not allowed!" << endl;
            validOperation = false;
        }
        break;
    default:
        cout << "Error: Invalid operation!" << endl;
        validOperation = false;
        break;
    }

    cout << "Operation to be performed: " << num1 << operation << num2 << endl;

    if (validOperation)
        cout << "Result: " << result << endl;

    return 0;
}
