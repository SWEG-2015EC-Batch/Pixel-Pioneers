#include <iostream>
using namespace std;

int main()
{
    double weeklyhours, gross_salary, overtimebonusrate_perhour;
    double pensionrate = 0.07, overtime_payment = 0.0, income_tax = 0.0;

    cout << "\vEnter weekly working hours: ";
    cin >> weeklyhours;

    cout << "Enter gross salary: ";
    cin >> gross_salary;

    if (weeklyhours > 40)
    {
        cout << "Enter over-time bonus rate: ";
        cin >> overtimebonusrate_perhour;
        overtime_payment = ((weeklyhours - 40) * overtimebonusrate_perhour);
    }
    else
    {
        overtime_payment = 0;
    }


    if (3500 <= gross_salary)
    {
        income_tax = gross_salary * 0.30;
    }
    else if ((3500 > gross_salary) && (2000 <= gross_salary))
    {
        income_tax = gross_salary * 0.25;
    }
    else if ((2000 > gross_salary) && (1200 <= gross_salary))
    {
        income_tax = gross_salary * 0.20;
    }
    else if ((1200 > gross_salary) && (600 <= gross_salary))
    {
        income_tax = gross_salary * 0.15;
    }
    else if ((600 > gross_salary) && (200 <= gross_salary))
    {
        income_tax = gross_salary * 0.10;
    }
    else
    {
        income_tax = gross_salary * 0.00;
    }

    double pension = pensionrate * gross_salary;
    double netpay = (gross_salary - pension - income_tax) + overtime_payment;

    cout << endl;
    cout << pension << " is the pension deducted from your salary.\n";
    cout << income_tax << " is the income tax deducted from your salary.\n";
    cout << overtime_payment << " is your over-time payment.\n";
    cout << netpay << " is your net take-home pay.\n\v";

    return 0;
}
