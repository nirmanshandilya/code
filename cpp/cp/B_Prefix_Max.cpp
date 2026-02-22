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
        int maxnum;
        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == *max_element(a, a + n))
            {
                swap(a[0], a[i]);
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {

            sum += a[0];
        }
        cout << sum << endl;
    }
}