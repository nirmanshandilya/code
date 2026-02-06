#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, a;
        bool common_elem = false;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a == k)
                common_elem = true;
        }
        if (common_elem)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}