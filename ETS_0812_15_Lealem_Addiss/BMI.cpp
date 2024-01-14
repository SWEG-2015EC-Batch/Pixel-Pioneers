#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Enter the weight of the body ";
    float M;
    cin>>M;
    cout<<"Enter the height of the body";
    float H;
    cin>>H;
    float BMI;
    BMI = M / (pow(H,2));
    cout<<"Your BMI is" <<BMI;
    return 0;
}