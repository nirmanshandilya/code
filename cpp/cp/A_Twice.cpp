#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, i, score = 0;
        cin >> n;

        // input array
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];

        // freq array
        int freq[20] = {0};
        for (i = 0; i < 20; i++) // i for nos. 1-20
        {
            for (int j = 0; j < n; j++) // j loops in a[n]
            {
                if (a[j] == i + 1)
                    freq[i]++;
            }
            score += (freq[i] / 2); // only pairs give score++
        }
        cout << score << endl;
    }
}