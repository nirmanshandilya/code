/*  1
    2   1
    3   2   1
    4   3   2   1
    5   4   3   2   1
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, row;
    cout<<"how many rows:\n";
    cin>>row;

    for(i=1; i<=row; i++){
        for(j=i; j>0; j--){
            cout<<j<<"\t";
        }
        cout<<"\n";
    }

}