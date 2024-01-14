#include <iostream>
#include <ctype.h>

using namespace std;
int main()
{
    char line[100];
    cout<<"Enter a sentence to be displayed both in lower and upper case.\n";
    cin.getline(line, 100);
    cout<<"Uppercased:\n";
    for (int i = 0; line[i] != '\0'; i++)
    {
        line[i] = toupper(line[i]);
        cout<<line[i];
    }
    cout<<"\nLowercased:\n";
    for (int i = 0; line[i] != '\0'; i++)
    {
        line[i] = tolower(line[i]);
        cout<<line[i];
    }

}