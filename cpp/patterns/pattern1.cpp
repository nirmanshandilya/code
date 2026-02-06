/*  ***
    ***
    ***
 */
#include <iostream>
using namespace std;
int main()
{
    int i=0, j=0, row, star;
    cout<<"how many rows: ";
    cin>>row;
    cout<<"how many * in 1 row: ";
    cin>>star;

    for(i=0; i<row; i++){
        for(j=0; j<star; j++){
            cout<<"*";
        }
        cout<<"\n";
    }


}