/*  
    A   B   C
    B   C   D
    C   D   E
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, row, elem;
    char a=65;
    cout<<"how many rows: ";
    cin>>row;
    cout<<"how many elements in 1 row: ";
    cin>>elem;

    for(i=0; i<row; i++){
            a=65+i;
        for(j=1; j<=elem; j++){
            cout<<a<<"\t";
            a++;            
        }
        cout<<"\n";
    }


}