#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout << " ";
        }

        if(i == 1 || i == n)
        {
            for(int k=1; k<=(2*i-1); k++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for(int k=1; k<=(2*i-3); k++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}