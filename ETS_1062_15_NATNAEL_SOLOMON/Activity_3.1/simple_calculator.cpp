#include<iostream>
using  namespace std;

int main(){
    char sign;
    double num1, num2, status;
    
    do{
    cout<<"Enter the first number: ";
    cin>> num1;
    cout<<"Enter the second number: ";
    cin>> num2;
    cout<<"Enter an operator: ";
    cin>> sign;

    switch (sign)
    {
    case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        break;
    case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
        break;
    case '/':
    if(num2==0){
        cout<<"Error! undefined."<<endl;
    }
    else{
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
    }
        break;
    case '*':
         cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        break;
        default:
        cout<<"Error! invalid operator.";
        break;
    }
     cout<<"Enter 0 if you want to terminate the program or enter any other number to continue: ";
     cin>> status;
     cout<<endl<<endl;

    }while (status !=0);
}
