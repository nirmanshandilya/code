/*  1   2   3
    4   5   6
    7   8   9
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, n=1, row, elem;
    cout<<"how many rows: ";
    cin>>row;
    cout<<"how many elements in 1 row: ";
    cin>>elem;

    for(i=1; i<=row; i++){
        for(j=1; j<=elem; j++){
            cout<<n<<"\t";
            n++;            
        }
        cout<<"\n";
    }


}