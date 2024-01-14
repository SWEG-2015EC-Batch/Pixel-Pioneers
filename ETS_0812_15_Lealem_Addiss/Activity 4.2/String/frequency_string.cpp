#include <iostream>

using namespace std;
int main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    int vowel = 0,consonant = 0, digits = 0, spec_char = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            vowel++;
        }
        else if ((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z'))
        {
            consonant++;
        }
        else if (word[i]>= '0' && word[i]<= '9')
        {
            digits++;
        }
        else
        {
            spec_char++;
        }
    }
    cout<<"________________________________\n";
    cout<<"Character type    | frequency \n";
    cout<<"________________________________\n";
    cout<<"Consonants        | "<<consonant<<endl;
    cout<<"Digits            | "<<digits<<endl;
    cout<<"Special character | "<<spec_char<<endl;
    cout<<"Vowels            | "<<vowel;
}