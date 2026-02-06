#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // sorted condition
        if (is_sorted(a, a + n))
        {
            long mindiff = (long)*max_element(a, a + n);
            for (int i = 0; i < n - 1; i++)
            {
                if (abs(a[i] - a[i + 1]) < mindiff)
                    mindiff = abs(a[i] - a[i + 1]);
            }
            if (mindiff == 0 || mindiff == 1)
                cout << "1" << endl;
            else
                cout << (mindiff / 2) + 1 << endl;
        }
        // unsorted condition
        else
            cout << "0" << endl;
    }
}