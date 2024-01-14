#include <iostream>
#define MAX 3
using namespace std;

int main(){
    
    int array[MAX][MAX] = {};
    int col_sum[MAX] = {};
    int row_pro[MAX] = {};
    int sum = 0, product = 1;

    for(int i = 0; i < MAX; i++){
        cout<<"Enter the elements of row "<<i+1<<" space separated: ";
        for(int j = 0; j < 3; j++){
            cin>>array[i][j];
        }
    }

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            sum += array[i][j];
            product *= array[j][i];
        }
        col_sum[i] = sum;
        row_pro[i] = product;
        product = 1;
        sum = 0;
    }

    for(int i = 0; i < MAX; i++){
        cout<<"Sum of column "<<i + 1<<" is: "<<col_sum[i]<<endl;
        cout<<"Product of row "<<i + 1<<" is: "<<row_pro[i]<<endl;
    }

}
