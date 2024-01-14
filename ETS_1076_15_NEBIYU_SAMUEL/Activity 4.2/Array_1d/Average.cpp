#include <iostream>
int main()
{
    int temp[8];
    double total = 0, average;
    
    for (int  i = 0; i < 8; i++)
    {
        cout <<"Enter array element"<<i+1<<":";
        cin>>temp[i];
        total += temp[i];
        
    }
  
   cout <<"The average value is "<< ((total/8))<<endl;
}
