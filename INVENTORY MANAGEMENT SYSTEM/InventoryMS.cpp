//Implements an inventory management system

#include <iostream>
#define DAYS 30
using namespace std;
int main()
{
    int warehouse[4][DAYS] = {0}, products[5][DAYS] = {0}, quantity, n, x, table[5][4] = {0};
    
    for (int i = 0; i < DAYS; i++)
    {
        cout<<"Day "<<i+1<<endl;        

        for (int j = 0; j < 4; j++)
        {
            //Input the warehouse where the product was stored at
            do
            {
                cout<<"Please enter the warehouse number(cannot exceed 4): ";
                if (!(cin>>n))
                {
                    cout<<"Invalid Input\n";
                    return 1;
                }
            } while (n > 4);

            //Input the product stored
            do
            {
                cout<<"Please enter the product stored today(cannot exceed 5): ";
                if (!(cin>>x))
                {
                    cout<<"Invalid Input\n";
                    return 1;
                }
            } while (x > 5);
            
            cout<<"Please enter the quantity of the products recieved: ";    
            if (!(cin>>quantity))
            {
                cout<<"Invalid Input\n";
                return 1;
            }
            
            warehouse[n-1][i] = quantity;
            products[x-1][i] += quantity;
            table[x-1][n-1] += quantity;
        }
    }
    //Print the table format of the inventory
    float bonus[4];
    cout<<"\nWarehouses\t\t\t\t\tProducts\n";
    cout<<"\t\t________________________________________________________________________________________\n";
    cout<<"\t\tProduct 1\t|Product 2\t|Product 3\t|Product 4\t|Product 5\t|Tot\\w.house\n";
    cout<<"____________________________________________________________________________________________________\n";
    for (int i = 0; i < 4; i++)
    {
        int total_row = 0;
        cout<<"Warehouse "<<i+1<<"\t|";
        for (int j = 0; j < 5; j++)
        {
            cout<<table[i][j]<<"\t\t|";
            total_row += table[i][j];
        }
        //Print the total inventory per warehouse
        cout<<total_row<<endl;
        //Calculate the bonus of the warehouse
        bonus[i] = (float)5 / 100 * total_row;
    }
    cout<<"Tot\\product\t|";
    //Print the total inventory per product
    for (int i = 0; i < 5; i++)
    {
        int total_column = 0;
        for (int j = 0; j < 4; j++)
        {
        total_column += table[j][i];
        }
        cout<<total_column<<"\t\t|";
    }
    cout<<"\n____________________________________________________________________________________________________\n";
    //Print out the bonus
    for (int i = 0; i < 4; i++)
    {
        cout<<"Shopkeeper "<<i+1<<"'s is"<<bonus[i]<<endl;

bool done = false;
    do
    {
        cout<<"If you would like to search a product's record press 1.\n";
        cout<<"If you would like to search a storekeeper's record press 2\n If you would like to exit press any other key\n";
        if ((!cin>>n))
        {
            cout<<"Invalid Input";
            return 1;
        }
        switch (n)
        {
            case 1:
            do
            { 
                cout<<"Which product would you like to search for (Press 1-5 for single search 6 for the entire product)";
                if (!cin>>n);
                {
                    cout<<"Invalid Input";
                    return 1;
                }
            } while (n > 6);
            
           //Print the entire record
            if (n == 6)
            {
                cout<<"Days\t\t\tQuantities per product\n";
               cout<<"\t\t_________________________________________________________\n";
                cout<<"\t\tProduct 1\t|Product 2\t|Product 3\t|Product 4\t|Product 5\n";
                for (int i = 0; i < DAYS; i++)
                {
                    cout<<"Day "<<i+1<<"\t\t|";
                    for (int j = 0; j < 5; j++)
                    {
                        cout<<products[j][i]<<"\t|";
                    }
                    cout<<endl;
                }
            }
            //Print a single record
            else
            {                
                cout<<"Days\t|Quantity of product "<<n<<endl;
                for (int i = 0; i < DAYS; i++)
                {
                    cout<<"Day "<<i+1<<"\t|";
                    cout<<products[n][i]<<endl;
                }
            }
            break;
            //Print the storekeeper's record
            case 2:
            do
            { 
                cout<<"Which storekeeper/s would you like to search for? (Press 1-4 for single search 5 for all storekeepers)";
                if (!cin>>n);
                {
                    cout<<"Invalid Input";
                    return 1;
                }
            } while (n > 5);
            //Print the entire record
            if (n == 5)
            {
                cout<<"Days\t\t\tQuantities per Warehouse\\Storekeeper\n";
                cout<<"\t\t______________________________________________\n";
                cout<<"\t\tStorekeeper 1\t|Storekeeper 2\t|Storekeeper 3\t|Storekeeper 4\n";
                for (int i = 0; i < DAYS; i++)
                {
                    cout<<"Day "<<i+1<<"\t\t|";
                    for (int j = 0; j < 4; j++)
                    {
                        cout<<warehouse[j][i]<<"\t|";
                    }
                    cout<<endl;
                }
            }
            //Print a single record
            else
            {                
                cout<<"Days\t|Quantity of storekeeper "<<n<<endl;
                for (int i = 0; i < DAYS; i++)
                {
                    cout<<"Day "<<i+1<<"\t|";
                    cout<<warehouse[n][i]<<endl;
                }
            }
            break;
            default:
            done = true;
            break;
        }
    } while (!done);
    }
  
  return 0;

}
