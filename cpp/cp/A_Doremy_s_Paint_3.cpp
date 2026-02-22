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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // if n == 2, always Yes;
        if (n == 2)
            cout << "Yes" << endl;
        else
        {
            // if all elem same, Yes;
            sort(a, a + n);
            bool same = false;
            for (int i = 1; i < n; i++)
            {
                if (a[0] == a[i])
                    same = true;
                else
                    same = false;
            }
            if (same)
                cout << "Yes" << endl;
            else
            {
                // no. of distinct elem should be 2;
                int count = 1, temp = a[0];
                for (int i = 1; i < n; i++)
                {
                    if (temp != a[i])
                    {
                        count++;
                        temp = a[i];
                    }
                }
                if (count > 2)
                    cout << "No" << endl;
                else
                {
                    // if n is even, half left half right;
                    if (n % 2 == 0)
                    {
                        if (a[n / 2] != a[n / 2 - 1])
                            cout << "Yes" << endl;
                        else
                            cout << "No" << endl;
                    }
                    // if n is odd
                    else
                    {
                        if ((a[n / 2] == a[n / 2 - 1] && a[n / 2] != a[n / 2 + 1]) || (a[n / 2] == a[n / 2 + 1] && a[n / 2] != a[n / 2 - 1]))
                            cout << "Yes" << endl;
                        else
                            cout << "No" << endl;
                    }
                }
            }
        }
    }
}