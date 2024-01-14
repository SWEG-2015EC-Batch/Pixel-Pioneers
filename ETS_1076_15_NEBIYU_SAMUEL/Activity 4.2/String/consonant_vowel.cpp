#include <ctype.h>
#include <iostream>

using namespace std;
int main()
{
    int vowel = 0,consonant = 0;
    string word;
    cout<<"Enter a string of letters: ";
    cin>>word;
    for (int i = 0; word[i] != '\0'; i++)
    {
        word[i] = tolower(word[i]);
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            vowel++;
        }
        else if (word[i]>='a' && word[i]<='z')
        {
            consonant++;
        }
    }
    cout<<"The number of consonants is "<<consonant<<endl;
    cout<<"The number of vowels is "<<vowel<<endl;
}