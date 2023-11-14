
//a program wich calclulate a gross salary ,net salary and bounus payment//
#include <iostream>
using namespace std;
int main(){
    //input which the user is asked to enter//
    cout<<"please tell me your name.. -> ";
    string name;
    cin>> name;
    
    cout<<"what is your base salary?   -> ";
    double base;
    cin>> base;
    

    cout<<"what is your working hour per week?  ->";
    double hour;
    cin>> hour;

    cout<<"what is your bonus per hour?      ->";
    double bouns;
    cin>>bouns;
                // the prosesing part which calclulate (gross_salary,net_salary,bouns_salary)the out put//
     const double taxrate= 0.2 * base;
     double gross_salary = (hour * bouns) + base;
     double net_salary = ((hour * bouns) + base) - taxrate;
     double bouns_salary = hour * bouns;
// the final out put//
cout<<"hey  " << name  <<endl;
cout<<"your gross_salary is: ->  "<<gross_salary<< "$"<<endl;
cout<<"your net_salary is:   ->    "<< net_salary<<"$"<<endl;
cout<<"bouns_salary is :     ->    "<< bouns_salary<<"$"<<endl;  

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl; 

                                   cout<<"THANK YOU !";




    return 0;
}