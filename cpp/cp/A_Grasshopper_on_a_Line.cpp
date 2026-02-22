#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, k;
        cin >> x >> k;
        if (x % k != 0)
            cout << "1" << endl
                 << x << endl;
        else
        {
            // if not divisible, always possible in 2 jumps
            cout << "2" << endl
                 << x - k + 1 << " "
                 << k - 1 << endl;
        }
    }
}