#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long n, m, h;
        cin >> n >> m >> h;
        long a[n];
        // array input
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // operations input
        long b[m];
        long c[m];
        for (int i = 0; i < m; i++)
            cin >> b[i] >> c[i];
        long temp[n];
        long *res;
        copy(a, a + n, temp);
        for (int i = 0; i < m; i++)
        {
            temp[b[i] - 1] += c[i];
            if (temp[b[i] - 1] > h)
                res = a;
            else
                res = temp;
        }
        // cout
        for (int i = 0; i < n; i++)
        {
            cout << *(res + i) << " ";
        }
        cout << endl;
    }
}