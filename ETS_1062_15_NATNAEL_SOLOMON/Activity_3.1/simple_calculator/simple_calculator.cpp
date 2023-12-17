#include <iostream>
using namespace std;

int main()
{
    char operator1;
    double num1, num2;
    int status;

    do
    {
        cout << "\vEnter the first number: ";
        cin >> num1;
        cout << "\vEnter an operator: ";
        cin >> operator1;
        cout << "\vEnter the second number: ";
        cin >> num2;
        cout << endl;

        switch (operator1)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "Error! undefined." << endl;
            }
            else
            {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        default:
            cout << "Error! invalid operator.\v";
            break;
        }

        cout << "\vEnter 0 if you want to terminate the program or enter any other number to continue: ";
        cin >> status;
        cout << endl
             << endl;

    } while (status);
}
