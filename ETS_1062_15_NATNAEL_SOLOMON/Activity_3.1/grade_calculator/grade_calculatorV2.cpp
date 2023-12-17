#include <iostream>
using namespace std;
int main()
{

    int status;

    do
    {
        double test, quiz, project, assignment, exam, assesment=0, result=0;

        cout << "\venter your test result (15%): ";
        cin >> test;
        cout << "\venter your quiz result (5%): ";
        cin >> quiz;
        cout << "\venter your project result (20%): ";
        cin >> project;
        cout << "\venter your assignment result (10%): ";
        cin >> assignment;
        cout << "\venter your final exam result (50%):";
        cin >> exam;

        assesment = test + assignment + project + quiz;
        result = assesment + exam;

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
        cout << "your assesment result out of 50 is : " << assesment << endl;
        cout << "your final exam result out of 50 is : " << exam << endl;
        cout << "your total result out of 100% is : " << result << endl;
        cout << "____________________________\n\v";

        cout << "Enter 0 to leave or any other number to continue: ";
        cin >> status;
    } while (status);

    return 0;
}
