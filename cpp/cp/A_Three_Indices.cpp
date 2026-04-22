#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    bool flag = false;
    for (int j = 1; j < n - 1; j++)
    {
        int left = -1, right = -1;
        // left check
        for (int i = 0; i < j; i++)
        {
            if (nums[i] < nums[j])
                left = i + 1;
        }
        // right check
        for (int k = j + 1; k < n; k++)
        {
            if (nums[j] > nums[k])
                right = k + 1;
        }
        if (left != -1 && right != -1)
        {
            flag = true;
            cout << "YES\n";
            cout << left << " " << j + 1 << " " << right;
            cout << "\n";
            break;
        }
    }
    if (!flag)
    {
        cout << "NO\n";
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