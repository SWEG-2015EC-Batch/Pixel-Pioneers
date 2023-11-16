#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
    // declaring variable
    char letter;
    // input the letter
    cout <<"enter a random letter";
    cin >> letter;
    // check if it's lowercase
    if (islower(letter)) {
        // convert to uppercase
        letter = toupper(letter);
        cout << "uppercase equivalent:" << letter <<endl;
     } else if (isupper(letter)) {
        // convert to lowercase
        letter = tolower(letter);
        cout << "Lowercase equivalent:" << letter <<endl;
     } else{
        cout << "Invaild input, please enter a valid letter" <<endl;
     }
     return 0;
}
