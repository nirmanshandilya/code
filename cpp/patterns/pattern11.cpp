/*  
    1   2   3
    2   3   4
    3   4   5
*/
#include <iostream>
using namespace std;
int main()
{
    int i=1, j, a, row, elem;
    cout<<"how many rows: ";
    cin>>row;
    cout<<"how many elements in 1 row: ";
    cin>>elem;

    for(i=1; i<=row; i++){
        a=i;
        for(j=1; j<=elem; j++){
            cout<<a<<"\t";
            a++;        
        }
        cout<<"\n";
    }


}