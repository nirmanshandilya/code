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
        vector<int> ans;
        int i = 2;
        if (!(n % 2))
        {
            while (n)
            {
                ans.push_back(i);
                ans.push_back(i * 2);
                i++;
                n -= 2;
            }
        }
        else
        {
            while (n > 1)
            {
                ans.push_back(i);
                ans.push_back(i * 2);
                i++;
                n -= 2;
            }
            ans.push_back(i);
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}