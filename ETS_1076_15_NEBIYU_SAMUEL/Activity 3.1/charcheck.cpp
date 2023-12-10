#include <iostream>
#include <cctype>
using namespace std;


int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if(islower(ch))
        cout << "The character is lowercase." << endl;
    else if(isupper(ch))
        cout << "The character is uppercase." << endl;
    else
        cout << "The character is neither uppercase nor lowercase." << endl;

    return 0;
}