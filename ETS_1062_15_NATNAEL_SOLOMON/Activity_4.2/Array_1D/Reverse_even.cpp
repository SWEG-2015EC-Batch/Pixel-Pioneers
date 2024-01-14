#include <iostream>

using namespace std;

int main(){

    int num = 10, k = 0;
    int temp[num] = {};
    int evennum[num] = {};

    for(int i = 0; i < num; i++){
        cout<<"Enter number: ";
        cin>>temp[i];
    }
    int k = 0;
    for(int i = 0; i < num; i++){
        if(temp[i] % 2 == 0){
            evennum[k] = temp[i];
            k++;
        }
    }
    if(k > 0){
        cout<<"Even numbers: ";
        for(int a = k - 1; a >= 0; a--){
            cout<<evennum[a]<<", ";
        }
    }
    else{
        cout<<"No even numbers";
    }

}
