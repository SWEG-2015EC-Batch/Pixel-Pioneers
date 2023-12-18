#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        float x;
        cout<<"Enter a number: ";
        cin>>x;
        float y;
        cout<<"Enter another number: ";
        cin>>y;
        char op;
        cout<<"Enter the operator: ";
        cin>>op;
        switch(op)
        {
            case '+':
            cout<<x + y;
            case '-':
            cout<<x - y;
            break;
            case '*':
            cout<<x * y;
            break;
            case '/':
            if (y == 0)
            {
                cout<<"Undefined\n";
            }
            else
            {
                cout<<x / y;
            }
            break;
            default:
            cout<<"The entered operation is invalid.\n";
            break;
        }
        cout<<endl;
        cout<<"Enter 0 to terminate or enter any other number to continue: ";
        cin>>n;
        cout<<endl;

    } while (n!=0);
    
    
}
