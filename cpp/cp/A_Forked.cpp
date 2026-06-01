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
    int a, b;
    cin >> a >> b;
    // king positions
    int xk, yk;
    cin >> xk >> yk;
    // queen positions
    int xq, yq;
    cin >> xq >> yq;
    // multipliers for king-queen positions
    int mul1[4] = {1, 1, -1, -1};
    int mul2[4] = {1, -1, 1, -1};
    // now make sets for the king and queen positions
    set<pair<int, int>> king, queen;
    FOR(i, 4)
    {
        king.insert({xk + mul1[i] * a, yk + mul2[i] * b});
        king.insert({xk + mul1[i] * b, yk + mul2[i] * a});
        queen.insert({xq + mul1[i] * a, yq + mul2[i] * b});
        queen.insert({xq + mul1[i] * b, yq + mul2[i] * a});
    }
    // now check for overlapping positions
    int ans = 0;
    for (auto it : king)
    {
        if (queen.find(it) != queen.end())
            ans++;
    }
    cout << ans << "\n";
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