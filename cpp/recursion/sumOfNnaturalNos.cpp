/*find sum of n natural nos using recursion*/

#include <iostream>
using namespace std;

// function declaration/prototyping
int sumOfN(int n);

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    // function calling
    cout << "sum of first " << n << " natural nos is " << sumOfN(n);
    return 0;
}

// function definition
int sumOfN(int n)
{
    if (n == 1)
        return 1;
    int sum = n + sumOfN(n - 1);
    return sum;
}