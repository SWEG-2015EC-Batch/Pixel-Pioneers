#include <iostream>

using namespace std;
#define people 5
int main()
{
    bool friends[people][people];
    bool prev = true;
for (int i = 0; i < people; i++)
{
    for (int j = 0; j < people; j++)
    {
        if (prev)
        {
            friends[i][j] = false;
            prev = false;
        }
        else
        {
            friends[i][j] = true;
            prev = true;
        }

    cout << "Friendship Matrix:" << endl;
    for (int i = 0; i < people; ++i) {
        for (int j = 0; j < people; ++j) {
            if (friends[i][j]) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    // Count the pairs of friends
    int friendPairsCount = 0;
    for (int i = 0; i < people; ++i) {
        for (int j = i + 1; j < people; ++j) {
            if (friends[i][j]) {
                cout << "Friends: Person " << i + 1 << " and Person " << j + 1 << endl;
                friendPairsCount++;
            }
        }
    }

    cout << "Total number of friend pairs: " << friendPairsCount << endl;
