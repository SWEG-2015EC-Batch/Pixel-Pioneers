#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<< "Enter the number of people";
    int num;
    cin>> num;
    for(int i = 1; i <= num; i++)
    {cout<<" Enter Your Gender(M/F)";
    char gen;
    cin>> gen;
    cout<<"Enter the weight of the body ";
    float M;
    cin>>M;
    cout<<"Enter the height of the body";
    float H;
    cin>>H;
    float BMI;
    BMI = M / (pow(H,2));
    cout<<"Your BMI is" <<BMI<<endl;
    if (BMI < 18.5 && (gen == 'F'|| gen == 'f') )
    {
        cout<< "user is : Under weight"<<endl;
    }
    else if ((BMI >= 18.5 && BMI <25)  && (gen == 'F'|| gen =='f'))
    {
        cout<< "User is : Normal weight";
    }
     else if ((BMI >= 25 && BMI < 29.9) && (gen == 'F'|| gen =='f'))
    {
        cout<< "User is : over weight";
    }
     else if (BMI >= 30)
    {
        cout<< " You have obesity ";
    }
     if (BMI < 20.5 && (gen == 'M'|| gen == 'm') )
    {
        cout<< "user is : Under weight"<<endl;
    }
    else if ((BMI >= 20.5 && BMI <25.9)  && (gen == 'M'|| gen =='m'))
    {
        cout<< "User is : Normal weight";
    }
     else if ((BMI >= 26 && BMI < 29.9) && (gen == 'M'|| gen =='m'))
    {
        cout<< "User is : over weight";
    }
     else if (BMI >= 30)
    {
        cout<< " You have obesity ";
    }
    }
    return 0;
    }
