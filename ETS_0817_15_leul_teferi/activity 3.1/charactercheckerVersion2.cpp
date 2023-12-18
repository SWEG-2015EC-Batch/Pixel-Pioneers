#include <iostream>
#include <cctype>
using namespace std;

/* It determines whether the input is a letter, digit or special character,
checks even/odd for digits and vowel/consonant, plus case for letters. */

int main()
{
    int status;
    char character;

    do
    { // user input
        cout << "\vEnter a single character: ";
        cin >> character;
        cout << endl;

        // checks if the character is a letter
        if (isalpha(character))
        {
            // checks if it's uppercase or lowercase letter
            if (isupper(character))
            {
                cout << character << " is an uppercase letter.\n\v";
            }
            else
            {
                cout << character << " is a lowercase letter.\n\v";
            }

            switch (toupper(character))
            {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cout << character << " is a vowel letter.\n\v";
                break;
            default:
                cout << character << " is a consonant letter.\n\v";
                break;
            }
        }

        else if (isdigit(character)) // checks if it's a digit
        {
            int theActual_int;
            theActual_int = character - 48; // since 0=48 in the context of ascii, converts it to the actual integer inputted

            if (theActual_int % 2 == 0) // checks evenness or oddness
            {
                cout << character << " is an even number.\n\v";
            }
            else
            {
                cout << character << " is an odd number.\n\v";
            }
        }

        else
        { // characters which are neither letters nor digits end up here

            cout << character << " is a special character.\n\v";
        }

        cout << "Enter 0 to exit or any other number to continue: ";
        cin >> status;

    } while (status); // exits if the value is false; in this context, 0 represents false
    return 0;
}