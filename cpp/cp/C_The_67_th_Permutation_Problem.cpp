#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int j = n + 1;
        vector<int> ans;
        for (int i = n; i >= 1; i++)
        {
            ans.push_back(i);
            for (int k = 0; k < 2; k++)
            {
                ans.push_back(j++);
            }
        }

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}