#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // main catch!!!
        if (a[0] != 1) // if a[0]!=1, never possible to sort;
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}