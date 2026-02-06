#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        if (b > a)
            cout << "Second" << endl;
        else if (a > b)
            cout << "First" << endl;
        else
        {
            if (c % 2 != 0)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
    }
}