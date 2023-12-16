#include <iostream>
using namespace std;
int main()
{

    bool stop = true;
    do
    {
        double gross_salary;
        double hour;
        double income_tax_rate;
        double bouns;

        cout << "please enter your gross salary: " << endl;
        cin >> gross_salary;
        cout << "please enter your working hour: " << endl;
        cin >> hour;
        cout << "please enter your income tax rate: " << endl;
        cin >> income_tax_rate;
        cout << "please enter your bouns per hour: " << endl;
        cin >> bouns;

        // const double pension_tax rate = 0.07;//
        double pension = gross_salary * 7 / 100;
        double income_tax = 0;
        if (gross_salary < 200)
        {
            income_tax = gross_salary;
        }
        else if (gross_salary >= 200 && gross_salary < 600)
        {
            income_tax = gross_salary * 0.1;
        }
        else if (gross_salary >= 600 && gross_salary < 1200)
        {
            income_tax = gross_salary * 0.15;
        }
        else if (gross_salary >= 1200 && gross_salary < 2000)
        {
            income_tax = gross_salary * 0.2;
        }
        else if (gross_salary >= 2000 && gross_salary < 3500)
        {
            income_tax = gross_salary * 0.25;
        }
        else
            income_tax = gross_salary * 0.3;

        if (hour > 40)
        {
            cout << hour * bouns << endl;
        }
        else
        {
            cout << "NO BOUNS!" << endl;
        }

        double net_salary = (gross_salary - pension - income_tax) + bouns;

        cout << "your pension tax is: " << pension << endl;
        cout << "your income tax  is: " << income_tax << endl;
        cout << "your net salary  is: " << net_salary << endl;
    }

    while (stop);

    return 0;
}