#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    int status;

    do
    {
        int number, digit = 1, choice, count = 1, sumoffirstlast = 0, productofeven = 1;
        cout << "\vEnter a number: ";
        cin >> number;
        cout << endl;

        cout << "_________________________________________________________________________\n\v";
        cout << "               P L A Y I N G    W I T H    N U M B E R S                   \n";
        cout << "_________________________________________________________________________\n\v";
        cout << "Enter:\n";
        cout << "1 to reverse the number.\n";
        cout << "2 to count the number of digits the number has.\n";
        cout << "3 to find the sum of the digits of the given number. \n";
        cout << "4 to find the product of even digits of the given number.\n";
        cout << "5 to print the first and last digit of the number and find their sum.\n";
        cout << "6 to swap the first and last digit of the number.\n";
        cout << "7 to check whether the number is palindrome or not.\n";
        cout << "8 to find the frequency of each digit and print with table format.\n";
        cout << "9 to check if the number is Armstrong or not.\n";
        cout << "10 to check whether a number is strong or not.\n";
        cout << "11 to check whether a number is perfect or not.\n";
        cout << "_________________________________________________________________________\n\v";

        cout << "Enter the number of your choice here (1-11): ";
        cin >> choice;
        cout << endl;

        while (number / digit >= 10)
        {
            digit *= 10;
            count++;
        }
        switch (choice)
        {
        case 1:
            int reverse;
            reverse = 0;
            int x, y;
            for (int i = 1; digit > 0; digit /= 10, i *= 10)
            {
                x = number / digit;
                y = number / (digit * 10);
                reverse += i * (x - (y * 10));
            }
            cout << "The reverse of " << number << " is " << reverse << "." << endl;
            break;

        case 2:
            cout << "The digit count is " << count << "." << endl;
            break;

        case 3:
            int sum;
            sum = 0;
            for (; digit > 0; digit /= 10)
            {
                x = number / digit;
                y = number / (digit * 10);
                sum += (x - (y * 10));
            }
            cout << "The sum of the digits is " << sum << "." << endl;
            break;

        case 4:
            int totwodigit;

            while (number > 0)
            {
                totwodigit = number % 10;
                if (totwodigit % 2 == 0)
                {
                    productofeven *= totwodigit;
                }
                number /= 10;
            }
            if (productofeven > 1)
            {
                cout << "The product of even digits in the given number is: " << productofeven << endl;
            }
            else
            {
                cout << "There is no even digit in the given number" << endl;
            }
            break;

        case 5:
            int first, last;
            first = number / digit;
            last = number / 10;
            last = number - (last * 10);
            sumoffirstlast = last + first;
            cout << "The first digit and the last digit are " << first << " and " << last << " respectively";
            cout << " and theirs sum equals to " << sumoffirstlast << "." << endl;
            break;

        case 6:
            int middle, swapped;
            first = number / digit;
            last = number / 10;
            last = number - (last * 10);
            middle = number - (first * digit) - last;
            swapped = last * digit + middle + first;
            cout << "The number becomes " << swapped << " after its first and last digit get swapped." << endl;
            break;

        case 7:
            reverse = 0;
            for (int i = 1; digit > 0; digit /= 10, i *= 10)
            {
                x = number / digit;
                y = number / (digit * 10);
                reverse += i * (x - (y * 10));
            }
            if (number == reverse)
            {
                cout << "The number is palindrome.\n";
            }
            else
            {
                cout << "The number is not palindrome.\n";
            }
            break;

        case 8:
            int frequency[10];
            int num;
            num = x - (y * 10);
            for (int i = 0; i < 10; i++)
            {
                frequency[i] = 0;
            }

            for (; digit > 0; digit /= 10)
            {
                x = number / digit;
                y = number / (digit * 10);
                num = x - (y * 10);
                frequency[num]++;
            }
            cout << "___________________\n";
            cout << "Number    |Frequency\n";
            cout << "___________________\n";
            for (int i = 0; i < 10; i++)
            {
                if (frequency[i] > 0)
                {
                    cout << i << "         |" << frequency[i] << "\n";
                    cout << "___________________\n";
                }
            }
            break;

        case 9:
            int arm;
            arm = 0;
            for (; digit > 0; digit /= 10)
            {
                x = number / digit;
                y = number / (digit * 10);
                num = x - (y * 10);
                arm += pow(num, count);
            }
            if (arm == number)
            {
                cout << "The number is an armstrong number.\n";
            }
            else
            {
                cout << "The number is not an armstrong number.\n";
            }
            break;

        case 10:
            sum = 0;
            for (; digit > 0; digit /= 10)
            {
                x = number / digit;
                y = number / (digit * 10);
                num = x - (y * 10);
                int factorial = 1;
                while (num > 0)
                {
                    factorial *= num;
                    num--;
                }
                sum += factorial;
            }
            if (sum == number)
            {
                cout << "The number is strong.\n";
            }
            else
            {
                cout << "The number is not strong.\n";
            }
            break;

        case 11:
            sum = 0;
            for (int i = number; i > 1; i--)
            {
                if (number % i == 0)
                {
                    sum += (number / i);
                }
            }
            if (sum == number)
            {
                cout << "The number is perfect.\n";
            }
            else
            {
                cout << "The number is not perfect.\n";
            }
            break;

        default:
            cout << "Try again! wrong choice.\n\v";
            break;
        }

        cout << "\vEnter 0 to exit or any other number to continue: ";
        cin >> status;

    } while (status);
    return 0;
}