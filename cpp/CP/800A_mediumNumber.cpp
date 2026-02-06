#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a < b && a > c) || (a < c && a > b))
            cout << a << endl;
        if ((b < a && b > c) || (b < c && b > a))
            cout << b << endl;
        if ((c < b && c > a) || (c < a && c > b))
            cout << c << endl;
    }
}