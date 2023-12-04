// a C++ program that calculates the BMI of a person
#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    cout<< "Enter the number of people: ";
    int people;
    cin>> people;
    for (int i = 1; i <= people; i++)
    {
    cout<<"Enter the gender of person """<<i<<":";
    char gen;
    cin>> gen;

    cout <<"Enter the weight of person "<<i<<":";
    float w;
    cin >> w;
    cout <<"Enter the Height of person "<<i<<":";
    float h;
    cin >> h;
    float BMI;
    BMI = w /(pow(h,2));
    cout <<"The BMI is: " << BMI << endl;

    if((BMI < 18.5) && (gen == 'F' || gen == 'f'))
    {
        cout << "Person "<<i<<" is UW.\n";
    }
    else if((BMI >= 18.5 && BMI <= 24.9) && (gen == 'F' || gen == 'f'))
    {
        cout << "Person "<<i<<" is NW.\n";
    }
    else if((BMI >= 25 && BMI <= 29.9) && (gen == 'F' || gen == 'f'))
    {
        cout<<"Person "<<i<<" is OW.\n";
    }
    else if(BMI >= 30)
    {
        cout<<"Person "<<i<<" is OBESE.\n";
    }

    else if((BMI < 20.5) && (gen == 'M' || gen == 'm'))
    {
        cout << "Person "<<i<<" is UW.\n";
    }
    else if((BMI >= 20.5 && BMI <= 25.9) && (gen == 'M' || gen == 'm'))
    {
        cout << "Person "<<i<<" is NW\n";
    }
    else if((BMI >= 26 && BMI <= 29.9) && (gen == 'M' || gen == 'm'))
    {
        cout<<"Person "<<i<<" is OW.\n";
    }
    else if(BMI >= 30)
    {
        cout<<"Person "<<i<<" OBESE.\n";
    } 
    else 
    {
        cout<<"Person "<<i<<"'s gender has been filled incorrectly.\n";
    }
    }
    return 0;
}

    





    
