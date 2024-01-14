#include <ctype.h>
#include <cstring>
#include <iostream>
#define max 50
using namespace std;
int main()
{
    int num;   
    do
    {    
        cout<<"Enter the number of people you would like to sort(max 50): ";
        cin>>num;
    } 
    while (num>50);
    
    string word[max];
    for (int i = 0; i<num; i++)
    {
        cout<<"Enter person "<<i+1<<": ";
        cin>>word[i]; 
    }
      
    for (int j = 0; j < num; j++)
    {
        for (int i = 0; i < num - 1; i++){
            int k = 0;
            while (word[i][k] == word[i+1][k] && (word[i][k] != '\0' || word[i+1][k] != '\0'))
            {
                k++;
            }
            char x = tolower(word[i][k]);
            char y = tolower(word[i+1][k]);
            if (x > y)
            {
                string temp = word[i];
                if (y == word[i+1][0])
                {
                    if (x == word[i][k])
                    {
                        word[i] = word[i+1];
                        word[i+1] = temp;
                        word[i][k] = y;
                        word[i+1][k] = x;
                    }
                    else
                    {
                        word[i] = word[i+1];
                        word[i+1] = temp;
                        word[i][k] = y;
                        word[i+1][k] = toupper(x);
                    }
                } 
                else
                {
                    if (x == word[i][0])
                    {
                        word[i] = word[i+1];
                        word[i+1] = temp;
                        word[i][k] = toupper(y);
                        word[i+1][k] = x;
                    }
                    else
                    {
                        word[i] = word[i+1];
                        word[i+1] = temp;
                        word[i][k] = toupper(y);
                        word[i+1][k] = toupper(x);
                    }
                }           
            }
        }
    }
    cout<<"The sorted list is: ";
    for (int i = 0; i < num;i++)
    {
        cout<<word[i]<<endl;
    }
}