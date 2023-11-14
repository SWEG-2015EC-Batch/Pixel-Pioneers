#include <iostream>
using namespace std;
int main (){
    cout<<"please enter your name:";
    string name;
    cin>>name;
    cout<<"working hours:  ";
    float hour;
    cin>>hour;
    cout<<"bouns per hour:";
    float bouns;
    cin>>bouns;
    cout<<"base salary:";
    float base;
    cin>>base;



   double gross_salary =(bouns*hour) + base;
   double taxrate= 0.02*base;
    double net_salary=((bouns*hour) + base) - taxrate;
    double bouns_salary = bouns * hour;
cout<<"hey  "<<name<<endl;
cout<<"your gross_salary is: " <<gross_salary<<endl;
cout<<" your net_salary is:  "<<net_salary<<endl;
cout <<"your bonus_salary is: "<<bouns_salary; 


return 0;
}