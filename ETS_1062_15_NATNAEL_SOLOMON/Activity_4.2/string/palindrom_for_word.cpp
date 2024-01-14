#include <ctype.h>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char word[100];
    char reverse[100];
    cout<<"Enter a word: ";
    cin>>word;
    for (int i = 0, j = strlen(word) - 1; word[i] != '\0'; i++, j--)
    {
        reverse[i] = word[j];
    }
    reverse[strlen(word)] = '\0';
    if (strcmp(word, reverse) == 0)
    {
        cout<<"The word is palindrome.\n";
    }
    else
    {
        cout<<"The word is not palindrome.\n";
    }
}