// A PROGRAM THAT CALCULATOR TWO NUMBERS!

#include <iostream>
using namespace std;

int main()
{
    cout << "*********************************************************" << endl;
    cout << "*************************calculator**********************" << endl;
    cout << "*********************************************************" << endl;
    int n;
    do
    {
        cout << "enter the first number:  " << endl;
        double first;
        cin >> first;
        cout << "enter the second number : " << endl;
        double second;
        cin >> second;

        cout << "enter the opration: ";
        char op;
        cin >> op;
        switch (op)
        {
        case '+':
            cout << first + second;
            break;
        case '-':
            cout << first - second;
            break;
        case '/':
            if (second == 0)
            {
                cout << "Undefined\n";
            }
            else
            {
                cout << first / second;
            }
            break;
        case '*':
            cout << first * second;
            break;
        default:
            cout << "invalid operation" << endl;
        }
        cout << "Enter 0 to terminate or enter any other number to continue: " << endl;
        int n;
        cin >> n;

    } while (n != 0);

    return 0;
}
