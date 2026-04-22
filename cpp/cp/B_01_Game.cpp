#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int count0 = 0, count1 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            count0++;
        else
            count1++;
    }
    if (min(count0, count1) % 2 != 0)
        cout << "DA\n";
    else
        cout << "NET\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}