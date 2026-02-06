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
        (a == b) ? cout << c << endl : (a == c) ? cout << b << endl
                                                : cout << a << endl;
    }
}