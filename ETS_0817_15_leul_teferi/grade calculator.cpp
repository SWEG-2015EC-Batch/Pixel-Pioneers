#include <iostream>
using namespace std;
int main()
{

    bool stop = true;

    do
    {
        double test;
        double quize;
        double project;
        double assignment;
        double exam;
        double assesment;
        double result;

        cout << "enter your test result(15%): ";

        cin >> test;
        cout << "enter your QUIZE result(5%): ";
        cin >> quize;
        cout << "enter your PROJECT  result(20%): ";
        cin >> project;
        cout << "enter your assignment result(10%): ";
        cin >> assignment;
        cout << "enter your final exam result(50%):";
        cin >> exam;

        assesment = test + assignment + project + quize;
        result = assesment + exam;
        if (result >= 90)
        {
            cout << "your grade is : A+" << endl;
        }
        else if (result >= 80)
        {
            cout << " your grade is : A" << endl;
        }
        else if (result >= 75)
        {
            cout << "your grade is : B+" << endl;
        }
        else if (result >= 60)
        {
            cout << "your grade is : B" << endl;
        }
        else if (result >= 55)
        {
            cout << "your grade is : C+" << endl;
        }
        else if (result >= 45)
        {
            cout << "your grade is : C" << endl;
        }
        else if (result >= 30 && result <= 45)
        {
            cout << "your grade is : D" << endl;
        }

        else
            cout << "your grade is : F " << endl;

        cout << "your assesment result out of 50 is : " << assesment << endl;
        cout << "your final result out of 50 is : " << exam << endl;
        cout << "your result out of 100% is : " << result << endl;
    } while (stop);

    return 0;
}