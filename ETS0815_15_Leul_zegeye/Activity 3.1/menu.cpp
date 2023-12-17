#include<iostream>
using namespace std;
int main(){
    

    cout<<"**********************************************************" <<endl;
    cout<<"********************choice********************************" <<endl;
    cout<<"**********************************************************" <<endl;
 
    cout<<"1.rectangle "<<endl;
    cout<<"2.full pyramid "<<endl;
    cout<<"3.half pyramid "<<endl;
    cout<<"4. hollow full pyramid "<<endl;
    cout<<"5. inverted half pyramid "<<endl;
    cout<<"6. hollow rectangle "<<endl;
    cout<<"7. hollow inverted half rectangle"<<endl;
    cout<<"8. half number pyramid"<<endl;



 do{ 
    int choice;
    cin>>choice;


 cout<<"Enter the number of * : ";
    int n;
    cin >>n;
   switch(choice)
    {
case 1:
for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"* ";

        }
        cout<<endl;

    }
    break;

    case 2:
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout << " ";
        }

        for(int k=1; k<=(2*i-1); k++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    break;
case 3:
for(int i=1; i<=n; i++)
    {
        for( int j=1; j<=i; j++)
        {
            cout<<"* " ;
        }
        cout<<endl;
    }
 break;
case 4:
    
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout << " ";
        }

        if(i == 1 || i == n)
        {
            for(int k=1; k<=(2*i-1); k++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for(int k=1; k<=(2*i-3); k++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << "\n";
    }



break;
case 5:
 for(int i=n; i>=1; i--)
    {
        for( int j=i; j>0; j--)
        {
            cout<<"* " ;
        }
        cout<<endl;
    }

break;
case 6:
int n,m;

        cout << "Enter the number of rows (greater than 2): ";
        cin >> m;

        cout << "Enter the number of columns (greater than 2): ";
        cin >> n;
        cout<<endl;
        for( int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i==1 || i==m || j==1 || j==n)
                {
                    cout << " "<< "* ";
                }
                else{
                    cout<<"   ";
                }
            }
            cout<<endl;
        }
break;







}
case 8:
 int n, j;
        for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";

             }
        cout<<endl;
    }


break;


 } while(choice!=0);
   


    return 0;
}