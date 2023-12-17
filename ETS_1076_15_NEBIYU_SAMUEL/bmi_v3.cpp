#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    cout << "Enter the number of people: ";
    int people;
    cin >> people;
    for (int i = 1; i <= people; i++)
    {
        cout << "Enter the Gender(M/F) of person "<<i<<" ";
        char gen;
        cin >> gen;
        cout << "Enter the weight of Person "<<i<<" ";
        float x;
        cin >> x;
        cout << "Enter the Height of person "<<i<<"  ";
        float y;
        cin >> y;
        float BMI;
        BMI = x /(pow(y,2));
        cout <<"The BMI is:" << BMI<<endl;
    
        if (BMI <= 18.5 && (gen == 'F' || gen == 'f'))
        {
            cout << "Person "<<i<<" is underweight.\n";
        }
        else if ((BMI > 18.5 && BMI <= 24.9) && (gen == 'F' || gen == 'f'))
        {
            cout << "Person "<<i<<" is normal weight.\n";
        }
        else if ((BMI >= 25 && BMI <= 29.9) && (gen == 'F' || gen == 'f'))
        {
            cout << "Person "<<i<<" is overweight.\n";
        }
        else if (BMI >= 30)
        {
            cout << "Person "<<i<<" is obese.\n";
        }
        else if (BMI <= 20.5 && (gen == 'M' || gen == 'm'))
        { 
            cout << "Person "<<i<<" is underweight.\n";
        }
        else if ((BMI > 20.5 && BMI <= 25.9) && (gen == 'M' || gen == 'm'))
        {
            cout << "Person "<<i<<" is normal weight.\n";
        }
        else if ((BMI >= 25.9 && BMI < 29.9) && (gen == 'M' || gen == 'm'))
        {
            cout << "Person "<<i<<" is overweight.\n";
        }
        else
        {
            cout << "Person "<<i<<" has entered an inappropriate gender\n";
        }
    }
    return 0; 

}
