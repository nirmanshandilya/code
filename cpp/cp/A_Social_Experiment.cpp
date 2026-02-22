#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long n;
        cin >> n;
        if (n > 2 && n % 2 == 0)
            cout << "0" << endl;
        else if (n == 2 || n == 3)
            cout << n << endl;
        else
            cout << "1" << endl;
    }
}