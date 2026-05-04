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
    int n;
    cin >> n;
    vi a(n);
    FOR(i, n)
    cin >> a[i];
    vi divby6;
    vi notdivby6;
    for (auto &it : a)
    {
        if (it % 6 != 0)
            notdivby6.push_back(it);
        else
            divby6.push_back(it);
    }
    for (auto &it : divby6)
    {
        notdivby6.push_back(it);
    }
    for (auto &it : notdivby6)
    {
        cout << it << " ";
    }
    cout << "\n";
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