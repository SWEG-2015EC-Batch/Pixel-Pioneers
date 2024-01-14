#include <iostream>
using namespace std;

int main()
{
   int ROWS,COLS;
   cout<<"Enter number of rows: ";
   cin>>ROWS;
   cout<<"Enter number of columns :";
   cin>>COLS;
   int first[ROWS][COLS], second[ROWS][COLS], result[ROWS][COLS];

    // Reading values for the first array
    cout << "Enter elements for the first array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> first[i][j];
        }
    }
    cout << "\nEnter elements for the second array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> second[i][j];
        }
    }

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }

    cout << "\nResulting data elements in table form:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}
