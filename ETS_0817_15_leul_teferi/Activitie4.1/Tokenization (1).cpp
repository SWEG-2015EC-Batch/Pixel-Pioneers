#include <iostream>

using namespace std;
int main()
{
    char line[100];
    cout<<"Enter a line of words: ";
    cin.getline(line, 100);
    for (int i = 0; line[i] != '\0';i++)
    {
        cout<<line[i];
        if (line[i] == ' ')
        {
            cout<<endl;
        }
    }
}