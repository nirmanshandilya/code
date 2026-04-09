#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mpp;
        // calc freq of elements
        for (int i = 0; i < n; i++)
            mpp[s[i]]++;

        // counting that no. of elements that appear odd number of times
        int oddfreqelem = 0;
        for (auto &[ch, freq] : mpp)
        {
            if (freq % 2 != 0)
                oddfreqelem++;
        }

        // if no of odd elements after removal is EVEN
        if (!((n - k) % 2))
        {
            if (oddfreqelem <= k)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        // if no of odd elements after removal is EVEN
        else
        {
            if (oddfreqelem <= k + 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }

    }
}