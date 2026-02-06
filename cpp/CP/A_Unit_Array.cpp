#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, sum = 0, count = 0, countpos = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] == -1)
                count++;
            else
                countpos++;
        }
        if (sum >= 0)
        {
            if (count % 2 == 0)
                cout << "0" << endl;
            else
                cout << "1" << endl;
        }
        else
        {
            int moves = 0;
            while (countpos < count)
            {
                countpos++;
                count--;
                moves++;
            }
            if (count % 2 == 0)
                cout << moves << endl;
            else
                cout << moves + 1 << endl;
        }
    }
}