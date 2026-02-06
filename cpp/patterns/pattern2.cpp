/*  1111
    2222
    3333
*/
#include <iostream>
using namespace std;
int main()
{
    int i=0, j=0, row, elem;
    cout<<"how many rows: ";
    cin>>row;
    cout<<"how many elements in 1 row: ";
    cin>>elem;

    for(i=1; i<=row; i++){
        for(j=1; j<=elem; j++){
            cout<<i;
        }
        cout<<"\n";
    }

}