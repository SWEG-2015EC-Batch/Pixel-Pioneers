// a C++ program that calculates the BMI of a person
#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    cout<<"Enter your gender (M/F):";
    char gen;
    cin>> gen;

    cout << "Enter the weight: ";
    float x;
    cin >> x;
    cout << " Enter the Height: ";
    float y;
    cin >> y;
    float BMI;
    BMI = x /(pow(y,2));
    cout <<"The BMI is: " << BMI << endl;


    // FOR FEMALE
    if((BMI < 18.5) && (gen == 'F' || gen == 'f'))
    {
        cout << " UW\n";
    }
    else if((BMI >= 18.5 && BMI <= 24.9) && (gen == 'F' || gen == 'f'))
    {
        cout << " NW\n";
    }
    else if((BMI >= 25 && BMI <= 29.9) && (gen == 'F' || gen == 'f'))
    {
        cout<<" OW\n";
    }
    else if(BMI >= 30)
    {
        cout<<" OBESITY\n";
    }

    // FOR MALE
    else if((BMI < 20.5) && (gen == 'M' || gen == 'm'))
    {
        cout << " UW\n";
    }
    else if((BMI >= 20.5 && BMI <= 25.9) && (gen == 'M' || gen == 'm'))
    {
        cout << " NW\n";
    }
    else if((BMI >= 26 && BMI <= 29.9) && (gen == 'M' || gen == 'm'))
    {
        cout<<" OW\n";
    }
    else if(BMI >= 30)
    {
        cout<<" OBESITY\n";
    } 
    else 
    {
        cout<<"Please provide appropriate gender. Thank you!";
    }

    return 0;
}
    
    




    
