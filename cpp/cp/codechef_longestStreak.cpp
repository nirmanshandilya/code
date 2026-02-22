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
        int a[n];
        int curr_streak = 0, longest_streak = INT16_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                curr_streak = 0;
            else
                curr_streak++;
            if (curr_streak > longest_streak)
                longest_streak = curr_streak;
        }
        cout << longest_streak << endl;
    }
}
