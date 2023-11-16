#include<iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y, result;

    cout << "Enter the value  of x:";
    cin >> x;

    cout <<"Enter the value of y:";
    cin >> y;

    result = pow(x,y);

    cout <<"The result of the experssion" << x << "^" << y << "is:" << result << std::endl;
    
    return 0;

}
