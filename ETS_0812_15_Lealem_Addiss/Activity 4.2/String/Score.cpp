#include <iostream>

using namespace std;
int main()
{
    char *answerKey = "AAAAAAAAAA";
    char answer[10];
    int result = 0;
    for (int i = 0; i < 10; i++)
    {
        cout<<"please enter the answer for question number"<<i+1<<":";
        cin>>answer[i];
        if (answer[i]==answerKey[i])
        {
         result++;   
        }
        
    }
    cout <<"your total result is "<<result<<"/"<<"10";
}
