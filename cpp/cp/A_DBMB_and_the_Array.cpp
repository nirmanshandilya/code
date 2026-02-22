#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, s, x, a;
        cin >> n >> s >> x;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }
        if (s == sum)
            cout << "YES" << endl;
        else
        {
            if ((s - sum > 0) && (s - sum) % x == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}