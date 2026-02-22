#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, loud = 0, min = INT_MAX;
        cin >> n;
        int a[n + 1];

        // array input n+1 elements
        for (int i = 0; i < n + 1; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            loud = max(a[i], a[i + 1]);
            if (loud < min)
                min = loud;
        }
        cout << min << endl;
    }
}