#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            a[i] = max(a[i], b[i]);
        }

        // all queries
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--; // for zero-based indexing
            r--;

            

            // result
            long long sum = 0;
            for (int i = l; i <= r; i++)
                sum += a[i];
            cout << sum << " ";
        }
        cout << endl;
    }
}