#include <iostream>

using namespace std;
int main()
{
    char word[100];
    cout<<"Enter a string of characters: ";
    cin>>word;
    int j = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if ((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z'))
        {
            cout<<word[i];
            j++;
        }
    }

}