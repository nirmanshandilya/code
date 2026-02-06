/*take n as input from user. print nth number of Fibonacci series.*/

#include <iostream>
using namespace std;

int fib(int num) // recursive func. generates individual terms of the series.
{
    if (num <= 1)
        return num;
    return fib(num - 1) + fib(num - 2);
}

void terms(int a) // generates all the terms of fibonacci series.
{
    cout << fib(a);         /* for(i = 0; i < a; i++){
                                cout << fib(i)
                                    } 
                                to print all terms of fibonacci series*/
}

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    if (n <= 0)
        cout << "enter +ve natural nos. only";
    else
        terms(n);
    return 0;
}
