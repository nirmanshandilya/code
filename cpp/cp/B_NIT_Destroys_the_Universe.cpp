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
        vector<long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int i = 0, j = n - 1, l, r;
        int cnt1 = 0;
        for (int k = 0; k < n; k++)
        {
            if (!a[k])
                cnt1++;
        }
        if (cnt1 == n)
            cout << "0" << "\n";
        else
        {
            while (i < n)
            {
                if (a[i] != 0)
                {
                    l = i;
                    break;
                }
                i++;
            }
            while (j >= 0)
            {
                if (a[j] != 0)
                {
                    r = j;
                    break;
                }
                j--;
            }

            int count = 0;
            while (l < r)
            {
                if (!a[l])
                    count++;
                l++;
            }
            if (count > 0)
                cout << "2" << "\n";
            else
                cout << "1" << "\n";
        }
    }
}