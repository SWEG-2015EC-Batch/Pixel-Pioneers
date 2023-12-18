#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    int number, digit = 1, choice, count = 1;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"Enter:"<<endl;
    cout<<"1 to reverse the number \n";
    cout<<"2 to count the number of digits the number has \n";
    cout<<"3 to find the sum of the digits of the given number \n";
    cout<<"4 to find the product of even digits of the given number\n";
    cout<<"5 to print the first and last digit of the number and find their sum\n";
    cout<<"6 to swap the first and last digit of the number\n";
    cout<<"7 to check whether the number is palindrome or not\n";
    cout<<"8 to find the frequency of each digit in a given integer and print the table format\n";
    cout<<"9 to check if the number is Armstrong or not\n";
    cout<<"10 to check whether a number is strong or not\n";
    cout<<"11 to check whether a number is perfect or not\n";
    cin>>choice;
    while (number / digit >= 10)
        {
            digit*=10;
            count++;
        }
    switch(choice)
    {
        case 1:
        int reverse;
        reverse = 0;
        int x,y;
        for (int i = 1;digit > 0;digit/=10, i*=10)
        {
            x = number / digit;
            y = number / (digit*10);
            reverse += i*(x- (y*10));
        }
        cout<<"The reverse of "<<number<<" is "<<reverse<<endl;
        break;

        case 2:
        cout<<"The digit count is "<<count;
        break;

        case 3:
        int sum;
        sum = 0;
        for ( ;digit > 0;digit/=10)
        {
            x = number / digit;
            y = number / (digit*10);
            sum += (x- (y*10));
        }
        cout<<"The sum of the digits is "<<sum<<endl;
        break;
        
        case 4:
        int product;
        product = 1;
        int num;
        for (;digit > 0;digit/=10, count--)
        {
            x = number / digit;
            y = number / (digit*10);
            num = x - (y*10);
            if (num%2 == 0 && count != 1)
            {  
                product *= num;
            }
        }
        cout<<"The product of the even digits is "<<product<<endl;
        break;

        case 5:
        int first,last;
        first = number / digit;
        last = number / 10;
        last = number - (last*10);
        cout<<"The first digit and the last digit are "<<first<<" and "<<last<<" respectively";
        break;

        case 6:
        int middle, swapped;
        first = number / digit;
        last = number / 10;
        last = number - (last*10);
        middle = number - (first*digit) - last;
        swapped = last * digit + middle + first;
        break;

        case 7:
        reverse = 0;
        for (int i = 1;digit > 0;digit/=10, i*=10)
        {
            x = number / digit;
            y = number / (digit*10);
            reverse += i*(x- (y*10));
        }
        if (number == reverse)
        {
            cout<<"The number is palindrome.\n";
        }
        else
        {
            cout<<"The number is not palindrome.\n";
        }
        break;

        case 8:
        int frequency[10];
        for (int i = 0; i < 10; i++)
        {
            frequency[i] = 0;
        }
        
        for ( ; digit > 0; digit/=10)
        {
            x = number / digit;
            y = number / (digit*10);
            num = x - (y*10);
            frequency[num]++;
        }
        cout<<"___________________\n";
        cout<<"Number    |Frequency\n";
        cout<<"___________________\n";
        for (int i = 0; i < 10; i++)
        {
            if (frequency[i] > 0)
            {
                cout<<i<<"         |"<<frequency[i]<<"\n";
                cout<<"___________________\n";
            }
        }
        break;

        case 9:
        int arm;
        arm = 0;
        for ( ; digit > 0; digit/=10)
        {
            x = number / digit;
            y = number / (digit*10);
            num = x - (y*10);
            arm += pow(num, count);
        }
        if (arm == number)
        {
            cout<<"The number is an armstrong number.\n";
        }
        else
        {
            cout<<"The number is not an armstrong number.\n";
        }
        break;

        case 10:
        sum = 0;
        for ( ;digit > 0;digit/=10)
        {
            x = number / digit;
            y = number / (digit*10);
            num = x - (y*10);
            int factorial = 1;
            while (num > 0)
            {
                factorial*= num;
                num--;
            }
            sum += factorial;
        }
        if (sum == number)
        {
            cout<<"The number is strong\n";
        }
        else
        {
            cout<<"The number is not strong\n";
        }
        break;

        case 11:
        sum = 0;
        for (int i = number; i > 1; i--)
        {
            if (number%i == 0)
            {
                sum+=(number / i);
            }
        }
        if (sum == number)
        {
            cout<<"The number is perfect\n";
        }
        else
        {
            cout<<"The number is not perfect\n";
        }
        break;

        default:
        break;
    }
}
