#include <iostream>
using namespace std;

int main() {
    int status;
    do
    {
        float first;
        cout <<"Enter the first number: ";
        cin >> first;

        float second;
        cout <<"Enter the second number: ";
        cin >> second;

        char op;
        cout <<"Enter the operation: "; // operations(+ , - , * , / )
        cin >> op;

        switch(op)
        {
            case '+':
            cout << first + second;
            break;

            case '-':
            cout << first - second;
            break;

            case '*':
            cout << first * second;
            break;

            case '/':
            if(second == 0)
            {
                cout <<"Undefined \n";

            }
            else
            {
                cout << first/second;
            }
            break;
            default:
            cout <<"Invalid operator. \n";
            break;
        }
        cout <<endl;
        cout <<"Enter 0 to terminate and any other number to continue: \n";
        cin >> status;
        cout << endl;

    } while (status!=0);
    return 0;
    
}

