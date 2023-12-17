    #include<iostream>
    using namespace std;

    int main()
    {
        int n, m;

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
        return 0;
    }