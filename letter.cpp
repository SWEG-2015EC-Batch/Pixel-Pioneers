#include<iostream>
#include <ctype.h>
using namespace std;
int main(){
//declaring viariabl//
char letter;
//input...//
cout<<"enter random letter ->";
cin>>letter;

if (islower(letter)){
    //convert to upper case//
   letter=toupper(letter);
    cout<<"uppercase equivalent: "<<letter<<endl;
}
else if (isupper(letter)){
    //convert to lower case//
    letter =tolower(letter);
    cout<<"lowercase equivalent: "<<letter<<endl;}
    else{
        cout<<"invalid input letter",
        cout<< "please input the valid letter";
    }
return 0;
}



