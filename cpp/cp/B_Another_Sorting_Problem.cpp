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
    vll arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll k = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] - arr[i + 1] > k)
            k = arr[i] - arr[i + 1];
    }

    if (!k)
    {
        cout << "YES\n";
        return;
    }
    ll prev = -1;
    bool b = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= prev)
        {
            prev = arr[i];
        }
        else if (arr[i] + k >= prev)
            prev = arr[i] + k;
        else
        {
            b = false;
            break;
        }
    }
    if (b)
        cout << "YES\n";
    else
        cout << "NO\n";
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
