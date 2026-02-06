/*  
    A   B   C
    D   E   F
    G   H   I
*/
#include <iostream>
using namespace std;
int main(){

    int i, j, row, col;
    char a = 65;//ASCII of A = 65

    cout<<"how many rows: ";
    cin>>row;
    cout<<"how many columns: ";
    cin>>col;

    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            cout<<a<<"\t";
            a++;

        }
        cout<<"\n";
    }
}