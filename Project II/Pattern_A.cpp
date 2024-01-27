
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 10; // Since we will be going from 0 to 9 and 9 to 0
    
     for (int i = 0; i < SIZE; ++i) 
    { 
        cout << endl;

        

        if(i==SIZE-1){
            continue;
        }

        // Prints numbers ascending from 0 to SIZE - i - 1
        for (int j = 0; j < SIZE - i; ++j) {
           
            cout <<j<<" ";
        }
        
        // Prints spaces for the diamond hole
        for (int j = 0; j < i * 2; ++j) {

            cout << "  ";
        }
        

        // Prints numbers descending from SIZE - i - 1 to 0
        for (int j = SIZE - i - 1; j >= 0; --j) {
            if (j != SIZE - 1) { // Avoid repeating the middle value
                
                cout <<" "<< j; 
            }
          
        }
        
        
         
    }

    
    for (int i = SIZE; i >= 0; --i) { 

        if(i==SIZE){
            continue;
        }

        // Prints numbers ascending from 0 to SIZE - i - 1
        for (int j = 0; j < SIZE - i; ++j) { 

            cout <<j<<" ";
        }
        
        // Prints spaces for the diamond hole
        for (int j = 0; j < i * 2; ++j) {
            cout << "  ";
           
            
        }
        
        // Prints numbers descending from SIZE - i - 1 to 0
        for (int j = SIZE - i - 1; j >= 0; --j) {
            
            if (j != SIZE - 1) { // To avoid repeating the middle value
                cout << " "<<j;
            }
        }
        
        cout << endl;
         
    }
   return 0; 
}
