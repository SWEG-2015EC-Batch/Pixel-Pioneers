#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int status;
    do
    {
    cout<<"Enter the first number: ";
    float first;
    cin>> first;
    cout<<"Enter the second number: ";
    float second;
    cin>> second;
    char op;
    cout<<"Enter the operation: ";
    cin>> op;
    switch(op){
    case '+':
    cout<< first + second;
    break;
    case '-':
    cout<< first - second;
    break;
    case '*':
    cout<< first * second;
    break;
    case '/':
    if (second == 0)
    {
        cout<< "Undefined";
    }
    else
    {
       cout<< first / second;
    }
    break;
    default:
    cout<< "Invalid opreator";
    break;
    }
    
    cout<<"Please enter zero to terminate the program or 1 to continue";
    cin>> status;
    cout<< endl;
    } while(status != 0);


    return 0; 
    }
