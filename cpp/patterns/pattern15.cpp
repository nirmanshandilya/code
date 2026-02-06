/*
         1
        121
       12321
      1234321

*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l, row;
    cout<<"enter no. of rows: ";
    cin>>row;

    for(i=1; i<=row; i++){

        for(j=1; j<=row-i; j++){
            cout<<" "; //print spaces
        }
        for(k=1; k<=i; k++){
            cout<<k; //print 1st triangle   
        }

        for(l=i-1; l>0; l--){
            cout<<l; //print 2nd triangle
        }

        cout<<endl;

    }

}