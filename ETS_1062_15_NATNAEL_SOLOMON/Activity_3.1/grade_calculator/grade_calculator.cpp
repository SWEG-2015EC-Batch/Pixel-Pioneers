#include <iostream>
using namespace std;
int main()
{

    int status;

    do
    {
        double result;
        cout << "\venter your total result (100%): ";
        cin >> result;

    
        cout << "____________________________\n\v";
        if (result >= 90)
        {
            cout << "Your grade is : A+" << endl;
        }
        else if (result >= 80)
        {
            cout << " Your grade is : A" << endl;
        }
        else if (result >= 75)
        {
            cout << "Your grade is : B+" << endl;
        }
        else if (result >= 60)
        {
            cout << "Your grade is : B" << endl;
        }
        else if (result >= 55)
        {
            cout << "Your grade is : C+" << endl;
        }
        else if (result >= 45)
        {
            cout << "Your grade is : C" << endl;
        }
        else if (result >= 30 && result <= 45)
        {
            cout << "Your grade is : D" << endl;
        }

        else
        {
            cout << "Your grade is : F " << endl;
        }
        cout << "____________________________\n\v";
        
        

        cout << "Enter 0 to leave or any other number to continue: ";
        cin >> status;
    } while (status);

    return 0;
}
