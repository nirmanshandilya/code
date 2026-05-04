#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long k, n;
        cin >> n >> k;
        vector<long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());

        // breakpoints array that counts the indices where diff > k;
        vector<long> breakpoints;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) > k)
                breakpoints.push_back(i + 1);
        }

        // if all diff already <= k; no elem need to be removed; cout 0;
        if (breakpoints.empty())
        {
            cout << "0" << endl;
            continue;
        }

        // now find the max length sub-array betn breakpoints; max length since min elements need to be removed;
        long firstdiff = breakpoints[0];
        long lastdiff = n - breakpoints[breakpoints.size() - 1];
        long currdiff = 0;

        for (int i = 0; i < breakpoints.size() - 1; i++)
        {
            currdiff = max(currdiff, (breakpoints[i + 1] - breakpoints[i]));
        }

        long maxdiff = max({firstdiff, lastdiff, currdiff});

        // n-maxdiff returned coz that's  the number of elements that need to be removed;
        cout << n - maxdiff << endl;
    }
}