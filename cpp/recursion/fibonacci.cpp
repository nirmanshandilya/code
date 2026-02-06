/*find factorial(n) using recursion*/

#include <iostream>
using namespace std;
int fib(int n);

int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    fib(n);
    return 0;
}

int fib(int n){
    if(n==0)
        return 0;
    if (n==1)
        return 1;
    int r=fib(n-1)+fib(n-2);
    cout<<r<<"\n";
    return r;

}