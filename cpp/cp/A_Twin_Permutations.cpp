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
        int k = *max_element(a, a + n) + *min_element(a, a + n);
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = k - a[i];
            cout << b[i] << " ";
        }
        cout << endl;
    }
}