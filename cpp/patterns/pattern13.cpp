/*  A
    B   C
    C   D   E
    D   E   F   G
*/

#include <iostream>
using namespace std;
int main()
{
    int i, j, row;
    char a=65;
    cout<<"how many rows: ";
    cin>>row;

    for(i=0; i<row; i++){
            a=65+i;
        for(j=0; j<=i; j++){
            cout<<a<<"\t";
            a++;            
        }
        cout<<"\n";
    }


}