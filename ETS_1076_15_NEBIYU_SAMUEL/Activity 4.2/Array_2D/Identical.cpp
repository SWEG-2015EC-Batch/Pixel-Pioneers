#include <iostream>
#define MAX 20
using namespace std;

int main(){
    int n, unidentical = 0;
    do
    {
      cout<<"Enter the number of elements of the sets(max 20): ";
      cin>>n;
    } while (n>20);
    int first[MAX] = {};
    int second[MAX] = {};

    cout<<"Enter elements of set 1 space separated: ";
    for(int i = 0; i < n; i++){
        cin>>first[i];
    }

    cout<<"Enter elements of set 2 space separated: ";
    for(int j = 0; j < n ; j++){
        cin>>second[j];

        if(first[j] != second[j]){
            unidentical++;
        }
    }

    if(unidentical > 0){
        cout<<"The two sets are not identical";
    }
    else{
        cout<<"The two sets are identical";
    }
}
