#include<iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Tank Capacity in Gallons";
    int x;
    cin >> x;
    cout << "Miles travelled per Gallon";
    float y;
    cin >> y;
    float z;
    z = x * y;
    cout << "Total miles travelled by the total Gallon capacity:" << z;
    return 0;

}
