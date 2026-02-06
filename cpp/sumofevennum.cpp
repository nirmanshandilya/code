#include <iostream>
using namespace std;
int main()
{
    int i=0, n, sum=0;
    cout<<"\nenter num: ";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i+=2;
    }
    cout<<"sum of all even nos. upto "<<n<<" is: "<<sum<<endl;

}