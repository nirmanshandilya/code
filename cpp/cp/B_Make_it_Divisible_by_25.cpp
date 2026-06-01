#include <bits/stdc++.h>
using namespace std;

// %%%%% MACROS %%%%%
// types
#define ll long long
#define vi vector<int>
#define vll vector<long long>
// shortcuts
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (long)(x).size()
// loops
#define FOR(i, n) for (int i = 0; i < (n); i++)

void solve()
{
    ll n;
    cin >> n;
    string s = to_string(n);
    int len = s.size();
    int res = INT_MAX;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if ((s[i] == '0' && s[j] == '0') || (s[i] == '5' && s[j] == '0') || (s[i] == '2' && s[j] == '5') || (s[i] == '7' && s[j] == '5'))
            {
                // total deletions = del betn i&j && del betn j&last
                // (j-i-1)+(len-j-1)=size-i-2;
                int deletions = len - i - 2;
                res = min(res, deletions);
            }
        }
    }
    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // FOR TEST CASES
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // FOR NO TEST CASES
    // solve();
    return 0;
}