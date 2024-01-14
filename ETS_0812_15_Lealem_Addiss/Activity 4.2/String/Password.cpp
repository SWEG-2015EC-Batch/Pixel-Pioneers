#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char PASSWORD[10] = "N1234U",password[10];
    cout<<"Enter the password: ";
    cin>>password;
    if (strcmp(PASSWORD, password) != 0)
    {
        cout<<"Incorrect password";
        return 1;
    }
    cout<<"Correct Password";
    return 0;
}
