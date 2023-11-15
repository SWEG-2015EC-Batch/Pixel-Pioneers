//a program that find the result of the exponntial function //

#include <iostream>
#include <cmath>
#include <ctype.h>
using namespace std;
int main(){
    // where xand y are the numbers that the user inputs
    //    -> x is the base and 
    //     -> y is the exponent.//
       cout<<"enter the base number";
        int x;
        cin>>x;
        cout<<"enter the exponent";
        int y;
        cin>>y;
        // final out put//
     int result = pow(x,y);
     cout<<result;


       
            
        
        







    return 0;
}