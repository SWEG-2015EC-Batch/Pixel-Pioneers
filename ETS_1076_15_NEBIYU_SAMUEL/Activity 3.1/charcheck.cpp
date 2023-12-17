#include <iostream>
using namespace std;
//checks if a charater is digit, lowercase, uppercase or special character
int main()
{
    char character;
    cout << "\vEnter a single character: ";
    cin >> character;
    cout << endl;

    if (isalpha(character)) //checks whether the character is a uppercase or lowercase
    {
        if (isupper(character))
        {
            cout << character << " is an uppercase letter.\n\v";
        }
        else
        {
            cout << character << " is a lowercase lettr.\n\v";
        }
    }
    else if (isdigit(character)) //checks if it's a digit
    {
        cout << character << " is a digit.\n\v";
    }
    else //the final stop if the above conditions are not true
    {   
        cout << character << " is a special character.\n\v";
    }

    return 0;
}