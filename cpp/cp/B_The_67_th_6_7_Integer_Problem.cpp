#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(7);
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        // find sum
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            sum += (-arr[i]);
        }
        cout << sum + arr[6] << "\n";
    }
}