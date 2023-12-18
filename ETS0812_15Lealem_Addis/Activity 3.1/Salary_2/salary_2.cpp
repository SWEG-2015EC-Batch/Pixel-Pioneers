#include <iostream>
using namespace std;
int main ()
{
    cout<<"Please enter your name:";
    string name;
    cin>>name;
    cout<<"Working hours:  ";
    float hour;
    cin>>hour;
    cout<<"Bonus per hour:";
    float bonus;
    cin>>bonus;
    cout<<"Base salary:";
    float base;
    cin>>base;
    
    double gross_salary =(bonus*hour) + base;
    double taxrate= 0.02*base;
    double net_salary=((bonus*hour) + base) - taxrate;
    double bonus_salary = bonus * hour;
    
    cout<<"Hey  "<<name<<endl;
    cout<<"Your gross_salary is: " <<gross_salary<<endl;
    cout<<"Your net_salary is:  "<<net_salary<<endl;
    cout<<"Your bonus_salary is: "<<bonus_salary; 
    return 0;
}
