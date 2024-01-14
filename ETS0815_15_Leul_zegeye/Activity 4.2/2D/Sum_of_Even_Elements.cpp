#include <iostream>

using namespace std;
int main()
{
   int array[3][4];
    int sum {0};
    cout<<"Enter the elements"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"enter array["<<i<<"]"<<"["<<j<<"]: ";
            cin>>array[i][j];
        }
        
    }
    cout<<"______________________________________\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i][j]%2 == 0)
            {
                sum += array[i][j];
                cout<<array[i][j]<<"\t";
            }
            else{
                cout<<"*"<<"\t";
            }
            
        }
        cout<<"______________________________________\n"<<endl;
        
    }
}
