#include <iostream>

using namespace std;
int main()
{
    string word, characters;
    cout<<"Enter a word: ";
    cin>>word;
    int frequency[256] = {0};
    int recorded[256] = {0};
    for (int i = 0; word[i] != '\0'; i++)
    {
        frequency[word[i]]++;
    }
    cout<<"_________________________________\n";
    cout<<"Character  | Frequency\n";
    cout<<"_________________________________\n";
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (frequency[word[i]] > 0 && recorded[word[i]] == 0)
        {
            cout<<word[i]<<"          | "<<frequency[word[i]]<<endl;
            recorded[word[i]] = 1;
        }
    }
}