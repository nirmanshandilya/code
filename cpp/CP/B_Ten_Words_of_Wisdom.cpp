#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, i = 0;
        cin >> n;
        int a[n];
        int b[n];
        while (i < n)
        {
            cin >> a[i] >> b[i];
            i++;
        }
        int win;
        int maxqlt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= 10)
            {
                if (b[i] > maxqlt)
                {
                    maxqlt = b[i];
                    win = i + 1;
                }
            }
        }
        cout << win << endl;
    }
}