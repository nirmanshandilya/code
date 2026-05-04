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
    vll nums(n);
    FOR(i, n)
    {
        cin >> nums[i];
    }
    // if only 1 element
    if (n <= 1)
        cout << "0\n";
    else
    {
        sort(all(nums));
        // if all elem same
        if (nums[0] == nums[n - 1])
            cout << "0\n";
        else
        {
            // for diff elements, check the longest subarr length
            int maxlen = 1, curr = 1;
            FOR(i, n - 1)
            {
                if (nums[i] == nums[i + 1])
                    curr++;
                else
                    curr = 1;
                if (curr > maxlen)
                    maxlen = curr;
            }
            int rem = n - maxlen, clone = 0, swap = 0;
            while (rem > 0)
            {
                clone += 1;
                int s = min(maxlen, rem);
                swap += s;
                if (rem >= maxlen)
                    maxlen *= 2;
                rem -= s;
            }
            cout << clone + swap << "\n";
        }
    }
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