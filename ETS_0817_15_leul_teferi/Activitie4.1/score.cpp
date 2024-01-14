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
    int n = 3;
    string full_name[3];
    float exam[3][3];
    /*for (int i = 0; i < n; i++)
    {
        cout<<"What is the name of student "<< i + 1 <<":";
        cin>>full_name[i];
        cout<<"Enter "<<full_name[i]<<"'s mid exam:";
        cin>>exam[0][i];
        cout<<"Enter "<<full_name[i]<<"'s final exam";
        cin>>exam[1][i];
        exam[2][i] = exam[0][i] + exam[1][i];
    }
    cout<<"_____________________________________\n";
    cout<<" FULL NAME    | Total Score\n";
    for (int i = 0; i < n; i++)
    {
        cout<<full_name[i]<<
        for (int j = 0; j < 13; j++)
        "| "<<exam[2][i]<<endl;
    }
    cout<<"_____________________________________";*/
    cout<<"Enter a name: ";
    cin>>full_name[0];
    cin>>full_name[1];
    cout<<full_name[0][1];
    return 0;
}