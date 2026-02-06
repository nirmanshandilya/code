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
        int odd = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
                odd++;
        }
        if (odd % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}