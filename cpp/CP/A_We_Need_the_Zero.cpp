#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, i = 0;
        cin >> n;
        int a[n];
        while (i < n)
        {
            cin >> a[i];
            i++;
        }
        // XOR of all elements
        int res = *a;
        for (i = 0; i < n - 1; i++)
            res ^= a[i + 1];

        if (n % 2 != 0)
            cout << res << endl;
        else
        {
            if (res == 0)
                cout << "0" << endl;
            else
                cout << "-1" << endl;
        }
    }
}